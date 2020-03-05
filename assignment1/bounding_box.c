#include <stdio.h>
#include"captcha.h"


void get_bounding_box(int height, int width, int pixels[height][width],
                  int *start_row, int *start_column, int *box_height, int *box_width)
{
	int i;
	int j;
	int a;
	int b;
	int row=0;
	int column=0;
	for(i=height-1;i>=0;i--,row++)
	{
		for(j=0;j<width;j++)
		{
			if(pixels[i][j]==1)
			{
				*start_row=i;
				break;
			}
		}
	}



	int end_row;
	int num;
	for(i=0;i<height;i++)
	{
		for(j=0;j<width;j++)
		{
			if(pixels[i][j]==1)
			{
				end_row=i;
				break;
			}
		}
	}
	*box_height=end_row-*start_row+1;




	for(j=width-1;j>=0;j--)
	{
		for(i=0;i<height;i++)
		{
			if(pixels[i][j]==1)
			{
				*start_column=j;
				break;
			}
		}

	}


	int end_column;
	num=0;
	for(j=0,row=0;j<width;j++)
	{
		for(i=height-1;i>0;i--)
		{
			if(pixels[i][j]==1)
			{
				end_column=j;
				break;
			}

		}

	}
	*box_width=end_column-*start_column+1;
}
