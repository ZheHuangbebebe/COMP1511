#include<stdio.h>
#include<stdlib.h>
#include"trader_bot.h"
#include"function.h"
double profit_ratio(struct location *c, struct location *d, struct location *a, struct bot *b,struct commodity *e)
{
	int dis_buy;
	int dis_sell;
	int cost;
	int revenue;
	int profit;
	dis_buy = find_distance(a,c,b);
	dis_sell = find_distance(c,d,b);
	int buy_turn;
	int sell_turn;
	if(dis_buy%b->maximum_move!=0)
	{
		buy_turn = dis_buy/b->maximum_move + 1;
	}
	else
	{
		buy_turn = dis_buy/b->maximum_move;
	}
	if(dis_sell%b->maximum_move!=0)
	{
		sell_turn = dis_sell/b->maximum_move + 1;
	}
	else
	{
		sell_turn = dis_sell/b->maximum_move;
	}
	int quantity;
	if(b->maximum_cargo_volume/e->volume < b->maximum_cargo_weight/e->weight)
	{
		quantity = b->maximum_cargo_volume/e->volume;
	}
	else
	{
		quantity = b->maximum_cargo_weight/e->weight;
	}
	if(quantity > d->quantity)
	{
		quantity = d->quantity;
	}
	if(d->quantity == 0 || c->quantity == 0)
	{
		return 0;
	}
	cost = quantity*c->price + (dis_buy + dis_sell)*find_average_fuel_price(b);
	revenue = quantity*d->price;
	profit = (revenue - cost)/(buy_turn + sell_turn+2);
	if(quantity > c->quantity)
	{
		profit = 0;
	}
	return profit;
}
