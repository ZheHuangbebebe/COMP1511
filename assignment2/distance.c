#include<stdio.h>
#include<stdlib.h>
#include"trader_bot.h"
#include<math.h>
#include"function.h"
int find_distance(struct location *a, struct location *c,struct bot *b)
{
	int i=0;
	int j=0;
	int ans;
	for(struct location *n = b->location;;n=n->next)
	{
		if(n->next==b->location&&i!=0)
		{
			break;
		}
		i++;
		
	}
	for(struct location *n=a;n->next != c;n=n->next)
	{
		j++;
	}
	if(j<i/2)
	{
		ans = abs(j)+1;
	}
	else
	{
		ans=abs(i-j);
	}	
	//printf("%d",i);
	return ans;
}
