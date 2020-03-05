#include<stdio.h>
#include<stdlib.h>
#include"trader_bot.h"
#include "function.h"
int find_location_size(struct bot *b)
{
	int i=0;
	for (struct location *n = b->location; ;n=n->next)
	{
		i++;
		if(n->next == b->location && i!=1)
		{
			break;
		}
	}
	return i;
}
