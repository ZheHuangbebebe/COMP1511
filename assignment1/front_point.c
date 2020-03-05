#include <stdio.h>
#include "captcha.h"
#include<math.h>
#include<stdlib.h>
int get_front_point(int height, int width, int pixels[height][width])
{
	int i;
	int j=0;
	int line[3];
	int front_point=0;
	for(i=0;i<height;i++)
	{
		if(pixels[i][0]==1&&pixels[i-1][0]!=1)
		{
			front_point=i;
			break;
		}
	}
		printf("%d ",i);
return front_point;
}
