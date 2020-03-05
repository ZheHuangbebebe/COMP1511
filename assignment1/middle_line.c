#include<stdio.h>
#include"captcha.h"
double get_middle_line(int height, int width, int pixels[height][width])
{
	int half;
	half=height/2;
	int i;
	double sum=0;
	double per;
	double double_width;
	double_width=width;
	for(i=0;i<width;i++)
	{
		if(pixels[half][i]==1)
		{
			sum=sum+1;
		}
	}
	per=sum/double_width;
	return per;
}
	
