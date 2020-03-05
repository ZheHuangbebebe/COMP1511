#include<stdio.h>
int main()
{
    int size,i,j;
    i=j=1;
    printf("Enter size: ");
    scanf("%d", &size);
    while(i<=size)
        {
        while(j<=size)
            {
            if(i==j || i==size+1-j)
                 {
                 printf("*");
                 }
            else
                 {
                 printf("-");
                 }
            j++;
            }
        printf("\n");
        i++;
        j=1;
        }
    return 0;
}
