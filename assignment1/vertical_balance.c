#include<stdio.h>
#include"captcha.h"
double get_vertical_balance(int height, int width, int pixels[height][width])
{
	double row_sum=0;
	double vertical_balance;
	double n_black_pixels=0;
	int i,j;
	for(i=0;i<height;i++)
	{
		for(j=0;j<width;j++)
		{
			if(pixels[i][j]==1)
			{
				row_sum=row_sum+i;
				n_black_pixels++;
			}
		}
	}
	vertical_balance=((row_sum/n_black_pixels)+0.5)/height;
	return vertical_balance;
}
