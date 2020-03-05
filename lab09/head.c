#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char *argv[])
{
	int i,j;
	i=0;
	j=0;
	int num;
	FILE *stream = fopen(argv[1],"r");
	if(strcmp(argv[1], "-n")!=0)
	{
		char number[10];
		for(i=0;i<10;i++)
		{
			if (fgets(number,1024, stream) != NULL) 
			{
				printf("%s",number);
			} 
		}
	}
	else
	{
		stream=fopen(argv[3],"r");
		num=atoi(argv[2]);
		char number[1024];
			for(i=0;i<num;i++)
			{
				if(fgets(number,1024, stream)!=NULL)
				{
					printf("%s",number);
				}
			
			 
			 }
		
	}	
	fclose(stream);
	return 0;
}
