#include<stdio.h>
#include<stdlib.h>
int main()
{
	char num[4096];
	char c;
	int k;
	int j=0;
	int i=0;
	printf("Enter a string: ");
	c=getchar();
	while(c!=EOF && c!='\n')
	{
		num[i]=c;
		i++;
		c=getchar();
	}
	// abccba
	for(k=0;k<=i/2-1;k++)
	{
		if(num[i-1-k]==num[k])
		{
			//printf("String is a palindrome\n");
			j++;
		}
		else
		{
			printf("String is not a palindrome\n");
			return 0;
		}
	}
	if(j>=k)
	{
		printf("String is a palindrome\n");
	}
}
