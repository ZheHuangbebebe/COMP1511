#include<stdio.h>
int main()
{
    int size,i,j;
    i=j=1;
    printf("Enter size: ");
    scanf("%d", &size);
    while(i<=size)
        {
        if(i==(size+1)/2)
            {
            while(j<=size)
                {
                printf("*");
                j++;
                }
            }
        else
            {
            while(j<=size)
                {
                if(j==(size+1)/2)
                     {
                     printf("*");
                     }
                else
                     {
                     printf("-");
                     }
                j++;
            }
        }
        printf("\n");
        i++;
        j=1;
        }
    return 0;
}
