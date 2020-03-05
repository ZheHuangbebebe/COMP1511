#include<stdio.h>
#include<stdlib.h>
#include"trader_bot.h"
#include "function.h"
#include<math.h>
int transaction_commodity_action(struct bot *b)
{
	int i=0;
	int j=0;
	int x,y;
	int max_i;
	int max_j;
	int max;
	int seller_l_buyer_l;
	char *c_name;
	struct location *m;
	struct location *q;
	struct location *p = NULL;
	struct location *sell;
	int ans;
	int profit[1024][1024];
	/*if(abs(nearest_fuel(b)) > b->fuel-b->maximum_move)
	{
		if(nearest_fuel(b) == 0)
		{
			return ACTION_BUY;
		}
		else
		{
			return ACTION_MOVE;
		}
	} */
		if(b->cargo == NULL)
		{
		for(x=0;x<1024;x++)
		{
			for(y=0;y<1024;y++)
			{
				profit[x][y]=0;
			}
		}
		for(struct location *n = b->location;; n=n->next)
		{
			if(n==b->location->next && i!=1)
			{
				i++;
				break;
			}
			if(n->type == LOCATION_SELLER)
			{
				//printf("1");
				c_name = n->commodity->name;
				//printf("%s ",n->commodity->name);
				for(j=0,m = b->location;;m=m->next)
				{
					//printf("1");
					if(m==b->location->next && j!=1)
					{
						j++;
						//printf("2");
						break;
					}
					if(m->type == LOCATION_BUYER && m->commodity->name == c_name && b->fuel >= find_distance(n,b->location,b) + find_distance(m,n,b) + nearest_fuel2(m,b)+1)
					{
						profit[i][j] = profit_ratio(n,m,b->location,b,m->commodity);
						//printf("%d  ",find_distance(n,b->location,b) + find_distance(m,n,b) + nearest_fuel2(m,b));
						//printf("%f",find_average_fuel_price(b));
						//printf("location is %d and %d  ",i,j);
					}
					j++;
				}
			}
			i++;
		//return 0;
		}
		max = profit[0][0];
		for (i=0;i<1024;i++)
		{
			for(j=0;j<1024;j++)
			{
				if(max < profit[i][j])
				{
					max = profit[i][j];
					max_i = i;
					max_j = j;
				}
			}
		}
		//printf("%d %d %d ",max_i, max_j,max);
		for(i=0, q = b->location;i<max_i;i++, q=q->next)
		{
		}
		for(j=0, p = b->location;j<max_j;j++, p=p->next)
		{
		}
		//printf("%d",b->fuel);
		//printf("%s",q->name);


			if(find_distance(b->location, q,b)+abs(nearest_fuel2(q,b)) > b->fuel-2*b->maximum_move)
			{
				if(nearest_fuel(b) == 0)
				{
					return ACTION_BUY;
				}
				else
				{
					return ACTION_MOVE;
				}
			}






			if(max_i>find_location_size(b)/2)
			{
				if(find_distance(q,b->location,b) < b->maximum_move)
				{
					ans = ACTION_MOVE;
				}
				else
				{
					ans = ACTION_MOVE;
				}
			}
			else
			{
				if(find_distance(q,b->location,b) < b->maximum_move)
				{
					ans =  ACTION_MOVE;
				}
				else
				{
					ans =  ACTION_MOVE;
				}
			}
			if( b->location == q)
			{
				if(b->maximum_cargo_volume/q->commodity->volume < b->maximum_cargo_weight/q->commodity->weight)
				{
					ans = ACTION_BUY;
					return ans;
				}
				else
				{
					ans = ACTION_BUY;
					return ans;
				}
			}
			//printf("%d",ans);
			//return ans;
		}
	
		if(b->cargo!=NULL)
		{				
			if(profit_sell(b)>0)
			{
				for(i=0, sell = b->location;i<profit_sell(b);i++, sell=sell->next)
				{
				}
			}
			else
			{
				for(i=0, sell = b->location;i<profit_sell(b);i++, sell=sell->next)
				{
				}
			}
			if(abs(profit_sell(b))+abs(nearest_fuel2(sell,b)) > b->fuel-1.5*b->maximum_move)
			{
				if(nearest_fuel(b) == 0)
				{
					return ACTION_BUY;
				}
				else
				{
					return ACTION_MOVE;
				}
			}
			if(profit_sell(b) == 0)
			{
				ans = ACTION_SELL;
				return ans;
			}	
			else
			{
				return ACTION_MOVE;
			}

			if(dump(b) == 1)
			{
				
				if(nearest_location(b) == 0)
				{
					return ACTION_DUMP;
				}
				else
				{
					return ACTION_MOVE;
				}

			}
			
			
		}
		return ans;

	
}
