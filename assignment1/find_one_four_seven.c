#include <stdio.h>
#include "captcha.h"
#include<math.h>
#include<stdlib.h>
void find_one_four_seven(int height, int width, int pixels[height][width])
{
	if(get_vertical_balance(height, width, pixels)>=0.548)
	{
		printf("7\n");
	}
	else
	{	
		get_left_trend(height,width,pixels);
	}
}
