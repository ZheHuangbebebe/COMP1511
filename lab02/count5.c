#include<stdio.h>
int main()
{
	int a;
	printf("Please enter an integer: ");
	scanf("%d", &a);
	if(a<=0)
	{
		printf("You entered a number less than one.\n");
	}
	else if(a>5)
	{
		printf("You entered a number greater than five.\n");
	}
	else if(a==1)
	{
	printf("You entered one.\n");
	}
	else if(a==2)
	{
	printf("You entered two.\n");
	}
	else if(a==3)
	{
	printf("You entered three.\n");
	}
	else if(a==4)
	{
	printf("You entered four.\n");
	}
	else if(a==5)
	{
	printf("You entered five.\n");
	}
	return 0;
}