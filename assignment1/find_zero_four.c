#include<stdio.h>
#include"captcha.h"
void find_zero_four(int height, int width, int sum)
{
	int i;
	double double_sum;
	double double_height;
	double_sum=sum;
	double_height=height;
	if(double_sum/double_height<0.6)
	{
		printf("4\n");
	}
	else
	{
		printf("0\n");
	}
}
