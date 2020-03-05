#include<stdio.h>
#include<stdlib.h>
#include"trader_bot.h"
#include<math.h>
int nearest_fuel(struct bot *b)
{
	int i=0;
	int j=0;
	int k=0;
	int min;
	for(struct location *n = b->location;; n=n->next)
	{
		if(n->type==3 && n->quantity>b->fuel_tank_capacity/4)
		{
			j=i;
			break;
		}
		i++;
		if(i>1024)
		{
			break;
		}
	}

	i=0;
	for(struct location *n = b->location;; n=n->previous)
	{
		if(n->type==3 && n->quantity>b->fuel_tank_capacity/4)
		{
			k=i;
			break;
		}
		i++;
		if(i>1024)
		{
			break;
		}
	}
	if(j<k)
	{
		min=j;
	}
	else
	{
		min=-k;
	}
	return min;
}
