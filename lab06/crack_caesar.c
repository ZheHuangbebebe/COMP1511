#include <stdio.h>
#include <stdlib.h>
void function_caesar(int i, int num);

int main(int argc, char *argv[])
{
	int num=0;
	int x, y;
	int z=0;
	int c;
	int i=0;
	int j=0;
	int shift;
	int real;
	int ans;
	int sequence[10000];
	double probability[26];
	int letter[26];
	double times=0;
	c=getchar();
	while(c>0)
		{
		sequence[i]=c;
		i++;
		num++;
		c=getchar();
		
		}
	for(i=0;i<num;i++)
		{
			if(sequence[i]>='a'&&sequence[i]<='z')
			{
			letter[sequence[i]-'a']++;
			times++;
			}
			else if(sequence[i]>='A'&&sequence[i]<='Z')
			{
			letter[sequence[i]-'A']++;
			times++;
			}
		}

	for(i=0;i<26;i++)
		{
		probability[i]=letter[i]/times;
		} 

	for(x=0;x<26;x++)
		{
		for(y=0;y<26;y++)
			{
			if(probability[x]>probability[y]&&x!=y)
				{
				z++;
				}
			}
		if(z==25)
			{
			real=x;
			break;
			}
		}
	shift=letter[real]+'a'-'e';










	for(i=0;i<num;i++)
		{
		ans=sequence[i];
		function_caesar(ans, shift);
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

















