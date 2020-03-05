#include<stdio.h>
int main()
{
    int num, fac, i=2,j=2;
    printf("Enter number: ");
    scanf("%d", &fac);
    num=fac;
    while(j<num)
        {
        if(num%j!=0)
            {
            j++;
            }
        if(num%j==0)
            {
            break;
            }
        }
    if(j==num)
        {
        printf("%d is prime\n", num);
        }
    else
        {
    printf("The prime factorization of %d is: \n", fac);
        while(i<=fac)
            {
            if(fac%i==0)
                {
                printf("%d", i);
                fac=fac/i;
                if(fac>i)
                    {
                    printf(" * ");
                    }
                }
            else
                {
                i++;
                }
            }
        printf(" = %d\n", num);
        }

    return 0;
}
