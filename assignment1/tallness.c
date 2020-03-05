#include<stdio.h>
#include"captcha.h"
double get_tallness(int height, int width){
	double double_height;
	double double_width;
	double_height=height;
	double_width=width;
	double tallness;
	tallness=double_height/double_width;
	return tallness;
}
