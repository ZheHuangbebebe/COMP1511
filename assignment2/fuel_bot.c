#include<stdio.h>
#include<stdlib.h>
#include"trader_bot.h"
#include<math.h>
#include"function.h"
void get_action(struct bot *bot, int *action, int *n)
{
	int i=0;
	int j=0;
	struct location *m;
	struct location *fuel;
	*action = transaction_commodity_action(bot);
	*n = transaction_commodity_distance(bot);	
	for(fuel = bot->location; i<1024;i++,fuel=fuel->next)
	{
		if(fuel->type == LOCATION_PETROL_STATION && fuel->quantity > bot->fuel_tank_capacity/4)
		{
			j++;
		}
	}
	if(j == 0)
	{
		if(bot->cargo != NULL)
		{
			for(i=0,fuel = bot->location;i<1024;i++,fuel=fuel->next)
			{
				if(fuel->type == LOCATION_BUYER && fuel->commodity == bot->cargo->commodity && fuel->quantity > bot->cargo->quantity/4 && find_distance(fuel,bot->location,bot) <= bot->fuel)
				{
					break;
				}
			}
		}
	
		for(i=0,m = bot->location;m !=fuel;m=m->next,i++)
			{
			}
			for(j=0,m=bot->location;m !=fuel;m=m->previous,j++)
			{
			}
			if(i>j)
			{
				*n = -j;
			}
			else
			{
				*n = i;
			}
		if(*n!=0)
		{
			*action = ACTION_MOVE;
		}
		else
		{
			*action = ACTION_SELL;
			*n = bot->cargo->quantity;
		}
	}
}
			
