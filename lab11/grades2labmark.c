#include<stdio.h>
#include<stdlib.h>
double grades2labmark(char grades[]);

int main(int argc, char *argv[])
{

	char *c = argv[1];
	printf("%.1lf\n",grades2labmark(c));
	return 0;
}



double grades2labmark(char grades[])
{
	double sum=0;
	int i=0;
	while(grades[i] != 0)
	{
		if(grades[i] =='A')
		{
			sum = sum + 1;
		}
		if(grades[i] == 'B')
		{
			sum = sum + 0.8;
		}
		if(grades[i] == 'C')
		{
			sum = sum + 0.5;
		}
		if(grades[i] == '+')
		{
			sum = sum + 0.2;
		}
		i++;
	}
	if(sum > 10)
	{
		sum = 10;
	}
	return sum;
} 
			

