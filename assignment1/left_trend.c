#include<stdio.h>
#include"captcha.h"
void get_left_trend(int height, int width, int pixels[height][width])
{
	int i,j;
	int k;
	k=height;
	int trend[k];
	double sum=0;
	double double_width;
	double_width=width;
	for(i=0;i<height;i++)
	{
		for(j=0;j<width;j++)
		{
			if(j!=width-1&&pixels[i][j]==1&&pixels[i][j+1]==0)
			{
				for(k=j+1;k<width;k++)
				{
					if(pixels[i][k]==1)
					{
						sum++;
						break;
					}
				}
			}
		}
	}

	if(sum<=14)
	{
		//printf("1,2");
		find_one_two(height,width,pixels);
		
	}
	else
	{
		//printf("0,4 ");
		find_zero_four(height,width,sum);
	}
	//printf("%.3lf ",sum/height);	
}
