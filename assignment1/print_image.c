#include"captcha.h"
#include <stdio.h>
void print_image(int height, int width, int pixels[height][width])
{
	int i;
	int j;
	for(i=height-1;i>=0;i--)
	{
		for(j=0;j<width;j++)
		{
			if(pixels[i][j]==0)
			{
				printf(".");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
}
		
	
