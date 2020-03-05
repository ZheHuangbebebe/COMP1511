#include<stdio.h>
#include"captcha.h"
double get_horizontal_balance(int height, int width, int pixels[height][width])
{
	double column_sum=0;
	double horizontal_balance;
	double n_black_pixels=0;
	int i,j;
	for(i=0;i<height;i++)
	{
		for(j=0;j<width;j++)
		{
			if(pixels[i][j]==1)
			{
				column_sum=column_sum+j;
				n_black_pixels++;
			}
		}
	}
	horizontal_balance=(column_sum/n_black_pixels+0.5)/width;
	return horizontal_balance;
}
