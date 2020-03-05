#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int start;
	int end;
	int i;
	FILE *stream = fopen(argv[3],"w");
	start = atoi(argv[1]);
	end = atoi(argv[2]);
	for(i=start;i<=end;i++)
	{
		fprintf(stream, "%d\n", i);
	}
	return 0;
}
	
