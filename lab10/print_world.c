#include<stdio.h>
#include<stdlib.h>
#include"trader_bot.h"
void print_world(struct bot *b) {
	struct commodity *c;
	int i=0;
	for(struct location *n = b->location;; n=n->next)
	{
		char *commodity;
		printf("%s: ", n->name);	
		if(n->type==LOCATION_START)
		{
			printf("start\n");
		}
		else if(n->type==LOCATION_DUMP)
		{
			printf("dump\n");
		}
		else if(n->type==LOCATION_OTHER)
		{
			printf("other\n");
		}
		if(n->commodity!=NULL&&n->price>0&&n->quantity>0&&n->type==1)
		{
			struct commodity *c = n->commodity;
			printf("will sell %d units of %s for $%d\n", n->quantity, c->name , n->price);
		}
		else if(n->commodity!=NULL&&n->price>0&&n->quantity>0&&n->type==2)
		{
			struct commodity *c = n->commodity;
			printf("will buy %d units of %s for $%d\n", n->quantity, c->name , n->price);
		}
		else if(n->type==3)
		{
			printf("Petrol station %d units of available fuel for $%d\n", n->quantity, n->price);
		}
		if(n->next==b->location&&i!=0)
		{
			break;
		}
		i++;
	}
	
}
