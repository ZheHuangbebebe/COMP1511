#include<stdio.h>
int main()
{
    int sy, fy;
    printf("Enter start year: ");
    scanf("%d", &sy);
    printf("Enter finish year: ");
    scanf("%d", &fy);
    printf("The leap years between %d and %d are: ", sy, fy);
    while(sy<=fy)
        {
            if((sy%4==0 && sy%100!=0) || sy%400==0)
                    {
                    printf("%d ", sy);
                    }
                sy++;
        }
    printf("\n");
    return 0;
}
