#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
void substitution_function(char sequence[], int c);
int main(int argc, char *argv[])
{
	int c;
	int i=1;
	char real;
	int num;
	char *alphabet = argv[1]; // alphabet = "qwertyuiop"
	c=getchar();
	while(c>0)
	{
		substitution_function(alphabet, c);
		c=getchar();
	}
	return 0;
}
void substitution_function(char sequence[], int c)
{
	int real;
	int num;
		if(c>='a'&&c<='z')
		{
			num=c-'a';
			real= sequence[num];
			putchar(real);
		}
		else if(c>='A'&&c<='Z')
		{
			num=c-'A';
			real= toupper(sequence[num]);
			
			putchar(real);
		}
		else
		{
			putchar(c);
		}
}

