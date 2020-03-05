#include<stdio.h>
int main()
{
    int num, i, sum=0;
    i=1;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("The factors of %d are: \n", num);
    while(i<=num)
        {
        if(num%i==0)
            {
            sum=sum+i;
            printf("%d\n", i);
            }
        i++;
        }
    printf("Sum of factors = %d\n", sum);
    if(sum==2*num)
        {
        printf("%d is a perfect number\n", num);
        }
    else
        {
        printf("%d is not a perfect number\n", num);
        }
    return 0;
}
