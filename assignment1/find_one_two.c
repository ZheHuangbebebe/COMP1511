#include<stdio.h>
#include"captcha.h"
void find_one_two(int height, int width, int pixels[height][width])
{
	int sum=0;
	int i,j;
	int k=0;
	int num[height/2+1];
	for(i=height/2;i<height;i++,k++)
	{
		for(j=0;j<width;j++)
		{
			if(pixels[i][j]==1)
			{
				num[k]=j;
				break;
			}
		}
	}
	for(i=0;i<height/2+1;i++)
	{
		if(i!=height/2&&num[i]<num[i+1]&&num[i]>num[i+1]-3)
		{
			sum++;
		}
	}
	if(sum<=10)
	{
		printf("1\n");
	}
	else
	{
		printf("2\n");
	}
	
}
				
