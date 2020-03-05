#include<stdio.h>
int main()
{
    int x, i;
    printf("Square size: ");
    scanf("%d", &x);
    i=1;
    while(i<=x*x)
        {
        
        printf("*");
        if(i%x==0)
            {
            printf("\n");
            }
        i++;
        }
    return 0;
}
