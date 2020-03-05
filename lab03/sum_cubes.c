#include<stdio.h>
int main()
{
    int cube, i, sum, a, j;
    printf("Sum how many cubes? ");
    scanf("%d", &cube);
    i=j=1;
    sum=0;
    while(i<=cube)
        {
            printf("%d^3 ",i);
            a=i*i*i;
            if(j<cube)
                {
                printf("+ ");
                }
        j=j+1;
        i=i+1;
        sum=sum+a;
        }
    printf("= %d\n", sum);
    return 0;
}

