#include <stdio.h>
#include <ctype.h>
int main()
{
	int i,j, c, num;
	double z=0;
	double d;
	int s;
	int letter[26];
	c=getchar();
	for(i=0;i<26;i++)
		{
		letter[i]=0;
		}

	while(c>=0)
		{
		if(c>=65&&c<=90)
			{
			num=c-65;
			letter[num]++;
			z++;
			}
		if(c>=97&&c<=122)
			{
			num=c-97;
			letter[num]++;
			z++;
			}
		c=getchar();
		}
	for(i=0;i<26;i++)
		{
		d=letter[i]/z;
		printf("'");
		putchar(i+97);
		printf("' ");
		printf("%lf ", d);
		printf("%d\n", letter[i]);
		}
	return 0;
} 
		
