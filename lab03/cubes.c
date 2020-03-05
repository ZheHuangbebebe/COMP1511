#include<stdio.h>
int main()
{
    int i, cubes, a;
    i=1;
    printf("Enter how many cubes: ");
    scanf("%d", &cubes);
    while(i<=cubes)
        {
        a = i * i * i;
        printf("%d^3 = %d\n", i, a);
        i++;
        }
    return 0;
}
