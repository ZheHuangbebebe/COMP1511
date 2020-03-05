#include<stdio.h>
#include"captcha.h"
double get_density(int height, int width, int pixels[height][width]){
	int i, j;
	double black=0;
	double area;
	double density;
	area=height*width;
	for(i=0;i<height;i++)
	{
		for(j=0;j<width;j++)
		{
			if(pixels[i][j]==1)
			{
				black++;
			}
		}
	}
	density=black/area;
	return density;
}
