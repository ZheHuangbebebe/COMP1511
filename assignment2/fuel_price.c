#include <stdio.h>
#include <stdlib.h>
#include "trader_bot.h"
#include "function.h"
double find_average_fuel_price(struct bot *b)
{
	int i=0;
	double num=0;
	double sum=0;
	double average_price;
	for(struct location *c = b->location;;c = c->next)
	{
		if(c->type == LOCATION_PETROL_STATION)
		{
			sum = sum + c->price;
			num++;
		}
		if(c->next==b->location&&i!=0)
		{
			break;
		}
		i++;
	}
	average_price = sum / num;
	//printf("%lf",average_price);
	return average_price;
}
