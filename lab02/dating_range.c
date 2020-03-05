#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter your age:  ");
    scanf("%d", &a);
    b=a/2+7;
    c=(a-7)*2;
    if(a<b)
        {
        printf("You are too young to be dating.\n");
        }
    else
        {
        printf("Your dating range is %d to %d years old.\n", b, c);
        }
    return 0;
}
