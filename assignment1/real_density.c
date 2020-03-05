#include <stdio.h>
#include "captcha.h"
#include<math.h>
#include<stdlib.h>
double get_real_density(int height, int width, int pixels[height][width]){
	int i,j;
	double num=0;
	double area=0;
	double density;
	for(i=height/2-3;i<=height/2+3;i++)
	{
		for(j=0;j<width;j++)
		{
			if(pixels[i][j]==1)
			{
				num++;
			}
			area++;
		}
	}
	density=num/area;
	return density;
}
	
