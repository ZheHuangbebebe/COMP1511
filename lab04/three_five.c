#include<stdio.h>
int main()
{
    int num, i;
    printf("Enter number: ");
    scanf("%d", &num);
    i=1;
    while(i<num)
        {
        if(i%3==0 || i%5==0)
            {
            printf("%d\n", i);
            }
        i++;
        }
    return 0;
}
