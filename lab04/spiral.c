#include<stdio.h>
int main()
{
    int i, j, k, size;
    printf("Enter size: ");
    scanf("%d", &size);
    i=j=1;
    while(i<=size)
	{    //1
	while(j<=size)
	    {    //2
	    if(i<=(size+1)/2)//一半
		{
		if(i==1 || (i==3&&(j!=size-1&&j!=size)))//去掉1行
		    {
		    printf("*");
		    }
		if(i==2 && j!=size)//去掉2行
		    {
		    printf("-");
		    }
		if(i>2 && j==size-1)//大于三行的倒数第二列
		    {
		    printf("-");
		    }
		if((i>2 && j==size) || (i==2&&j==size))//大于三行的倒数第一列
		    {
		    printf("*");
		    }
		if(i%2==1 && i>3)//第三行朝下的奇数行
		    {
			if(j%2==0 && (j<i-2 || j>size+1-i) && j<=size-2)
				{
				printf("-");
				}
			else
				{
				if(j<size-1)
					{
					printf("*");
					}
				}
		    }
		if(i%2==0 && i>3)//第三行朝下的偶数行
		    {
			if(j%2==1 && (j<i-2 || j>size+1-i) && j<=size-2)
				{
				printf("*");
				}
			else
				{
				if(j<size-1)
					{
					printf("-");
					}
				}
		    }
		}






	    if(i>(size+1)/2)//下半段
		{
		if(i==size)//去掉最后一行
		    {
		    printf("*");
		    }
		if(i%2==1 && i<size)//奇数行
		    {
			if(j%2==0 && (j<=(size-i) || j>i))
				{
				printf("-");
				}
			else
				{
				printf("*");
				}	
		    }
		if(i%2==0)//偶数行
		    {
			if(j%2==1 && (j<=(size-i) || j>i))
				{
				printf("*");
				}
			else
				{
				printf("-");
				}
		    }
		}
	    j++;
	    }          //2
	printf("\n");
	i++;
	j=1;
    }        //1
    return 0;
}
