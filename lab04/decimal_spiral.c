#include<stdio.h>
int main()
{
    int i, j, k,z, size;
    printf("Enter size: ");
    scanf("%d", &size);
    i=j=1;
	k=size*size/2+size-0.5;
	z=0.5;
	printf("%d",z);
    while(i<=size)
	{    //1
	while(j<=size)
	    {    //2
	    if(i<=(size+1)/2)//一半
			{
			if(i%2==1)//odd
				{
				for(;j>i&&j<size+2-i;k-1)
					{
					printf("%d", k%10);
					}
}
				













			}






	    if(i>(size+1)/2)//下半段
		{
		}
	    j++;
	    }          //2
	printf("\n");
	i++;
	j=1;
    }        //1
    return 0;
}
