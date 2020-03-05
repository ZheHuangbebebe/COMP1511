#include<stdio.h>
#include<stdlib.h>
#include"trader_bot.h"
#include<math.h>
#include<function.h>
void get_action(struct bot *bot, int *action, int *n)
{
	*action = transaction_commodity_action(bot);
	*n = transaction_commodity_distance(bot);	
}
			
