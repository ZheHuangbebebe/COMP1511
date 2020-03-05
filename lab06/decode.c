#include<stdio.h>
#include<stdlib.h>
void decode_function(char sequence[], int c);
int main(int argc, char *argv[])
{
	int c;
	int i=1;
	char *alphabet = argv[1]; // alphabet = "qwertyuiop"
	c=getchar();
	while(c>0)
		{
		decode_function(alphabet, c);
		c=getchar();
		}
	return 0;
}
void decode_function(char sequence[], int c)
{
	int real;
	int num;
	int i;
		if(c>='a'&&c<='z')
		{
			for(i=0;i<26;i++)
			{
				if(sequence[i]==c)
				{
					real=i+'a';
					putchar(real);
				}
			}
		}
		else if(c>='A'&&c<='Z')
			{
				for(i=0;i<26;i++)
				{
					if(sequence[i]==(c+32))
					{
						real=i+'A';
						putchar(real);
					}
				}
			}
		else
			{
			putchar(c);
			}
}

