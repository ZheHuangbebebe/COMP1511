#include<stdio.h>
#include<stdlib.h>
#include"trader_bot.h"
#include<math.h>
int nearest_fuel2(struct location *a,struct bot *b)
{
	int i=0;
	int j=0;
	int k=0;
	int min;
	for(struct location *n = a;; n=n->next)
	{
		if(n->type==3)
		{
			j=i;
			break;
		}
		i++;
	}

	i=0;
	for(struct location *n = b->location;; n=n->previous)
	{
		if(n->type==3)
		{
			k=i;
			break;
		}
		i++;
	}
	if(j<k)
	{
		min=j;
	}
	else
	{
		min=-k;
	}
	return abs(min);
}
