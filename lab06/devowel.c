#include<stdio.h>
int main()
{
	int i;
	i=getchar();
	while(i>=0)
	{
		if(i!='a'&&i!='e'&&i!='i'&&i!='o'&&i!='u')
		{	
			putchar(i);
		}
		i=getchar();
	}

	return 0;

}

