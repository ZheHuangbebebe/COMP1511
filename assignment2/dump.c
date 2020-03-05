#include<stdio.h>
#include<stdlib.h>
#include"trader_bot.h"
#include "function.h"
int dump(struct bot *b)
{
	int i=0;
	if(profit_sell(b) == 9999)
	{
		return 1;
	}
	for(struct location *n = b->location;i<find_location_size(b);n=n->next,i++)
	{
		if(n->commodity == b->location->commodity && n->quantity > b->cargo->quantity&&n!=b->location)
		{
			return 0;
		}
	}
	return 1;
}
