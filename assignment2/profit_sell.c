#include<stdio.h>
#include<stdlib.h>
#include"trader_bot.h"
#include "function.h"
int profit_sell(struct bot *b)
{
	int profit[1024];
	int i=0;
	int quantity;
	int max;
	int max_i;
	int ans;
	int k;
	struct location *p;
	for (i=0;i<1024;i++)
	{
		profit[i] = 0;
	}
	i=0;
	for(struct location *n = b->location; ;n=n->next,i++)
	{
		if(n->type == LOCATION_BUYER && n->commodity == b->cargo->commodity && n->quantity > b->cargo->quantity)
		{
			quantity = n->quantity;
			if(find_distance(n,b->location,b)%b->maximum_move!=0)
			{
				k=find_distance(n,b->location,b)/b->maximum_move+1;
			}
			else
			{
				k=find_distance(n,b->location,b)/b->maximum_move;
			}
			profit[i] = (quantity * n->price - find_distance(n,b->location,b) * find_average_fuel_price(b))/(k+1);
			if(n->quantity < b->cargo->quantity)
			{
				profit[i] = 0;
			}
		}
		if(n->next == b->location)
		{
			break;
		}
	}
	max = profit[0];
	for(i=0;i<1024;i++)
	{
		if(max < profit[i])
		{
			max = profit[i];
			max_i=i;
		}
	}
	if(max == 0)
	{
		return 9999;
	}
	for (i=0,p=b->location;i<max_i;i++,p=p->next)
	{
	}
	if(max_i>find_location_size(b)/2)
	{
		if(find_distance(p,b->location,b) < b->maximum_move)
		{
			ans = -1 * find_distance(p,b->location,b);
		}
		else
		{
			ans = -1 * b->maximum_move;
		}
	}
	else
	{
		if(find_distance(p,b->location,b) < b->maximum_move)
		{
			ans = find_distance(p,b->location,b);
		}
		else
		{
			ans = b->maximum_move;
		}
	}
	return ans;
}
