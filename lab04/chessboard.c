#include<stdio.h>
int main()
{
    int size,i,j;
    i=j=1;
    printf("Enter size: ");
    scanf("%d", &size);
    while(i<=size)
        {
        if(i%2==1)
            {
            while(j<=size)
                {
                if(j%2==0)
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
        else
            {
            while(j<=size)
                {
                if(j%2==1)
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
