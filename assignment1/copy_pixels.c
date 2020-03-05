#include <stdio.h>
#include"captcha.h"

void copy_pixels(int height, int width, int pixels[height][width],
                 int start_row, int start_column, int copy_height, int copy_width,
                 int copy[copy_height][copy_width])
{
	int i,j;
	int a;
	a=start_column-1;
	for(i=0;i<copy_height;i++)
	{
		for(j=0;j<copy_width;j++)
		{
			copy[i][j]=pixels[start_row+i][start_column+j];
		}
	}
}
