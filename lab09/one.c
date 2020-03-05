#include<stdio.h>
#include<stdlib.h>
int main()
{
	char c;
	int i=0;
	int j;
	printf("Enter a string: ");
	c=getchar();
	char num[4096];
	while(c!= '\n' && c!=EOF)
	{
		num[i]=c;
		c=getchar();
		i++;
	}
	for(j=0;j<i;j++)
	{
		putchar(num[j]);
		printf("\n");
	}
	return 0;
}
