#include <stdio.h>
#include "captcha.h"
#include<math.h>
#include<stdlib.h>
int get_back_point(int height, int width, int pixels[height][width])
{
	int i;
	int j=0;
	int line[3];
	int back_point=0;
	for(i=0;i<height;i++)
	{
		if(pixels[i][width-1]==1)
		{
			back_point++;
			break;
		}
	}
		printf("%d ",i);
	
return back_point;
}
