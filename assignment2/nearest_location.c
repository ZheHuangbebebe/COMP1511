#include<stdio.h>
#include<stdlib.h>
#include"trader_bot.h"
#include "function.h"
int nearest_location(struct bot *b)
{
	int i=0;
	int j=0;
	struct location *n;
	if(dump(b) == 1)
	{
		for(n = b->location;;n=n->next,i++)
		{
			if( n->type ==  LOCATION_DUMP)
			{
				break;
			}
		}
		for(n=b->location;;n=n->previous,j++)
		{
			if(n->type == LOCATION_DUMP)
			{
				break;
			}
		}
		if(i>j)
		{
			return -j;
		}
		else
		{
			return i;
		}
	}
	else
	{
		for(n = b->location;;n=n->next,i++)
			{
				if( n->type ==  LOCATION_BUYER && n->commodity == b->cargo->commodity)
				{
					break;
				}
			}
			for(n=b->location;;n=n->previous,j++)
			{
				if(n->type == LOCATION_BUYER && n->commodity == b->cargo->commodity)
				{
					break;
				}
			}
			if(i>j)
			{
				return -j;
			}
			else
			{
				return i;
			}
	}
}
