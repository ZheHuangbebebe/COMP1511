#include<stdio.h>
#include"captcha.h"
double get_density(int height, int width, int pixels[height][width]){
	int i, j;
	double white=0;
	double area;
	double density;
	area=height*width;
	for(i=0;i<height;i++)
	{
		for(j=0;j<width;j++)
		{
			if(pixels[i][j]==0)
			{
				white++;
			}
		}
	}
	density=white/area;
	return density;
}
