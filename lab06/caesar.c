#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void function_caesar(int i, int num);
int main(int argc, char *argv[])
{	
	int i;
	int num=atoi(argv[1]);
	i=getchar();
	while(i>=0)
		{
		function_caesar(i, num);
		i=getchar();
		}
	return 0;
}


void function_caesar(int i, int num)
{
		while(num<0)
			{
			num=num+26;
			}
	
		if((i>=65&&i<=90))
			{
			putchar((i+num-65)%26+65);
			}
		else if(i>=97&&i<=122)
			{
			putchar((i+num-97)%26+97);
			}
		else
			{
			putchar(i);
			}
}



//And we'll never be royals
//It don't run in our blood
//That kind of lux just ain't for us
//We crave a different kind of buzz


