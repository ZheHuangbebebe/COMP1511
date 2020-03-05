#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter integer: ");
    scanf("%d", &a);
    printf("Enter integer: ");
    scanf("%d", &b);
    printf("Enter integer: ");
    scanf("%d", &c);
    printf("The integers in order are: %d %d %d\n", a*(a<b&&b<c)+a*(a<c&&c<b)+b*(b<a&&a<c)+b*(b<c&&c<a)+c*(c<a&&a<b)+c*(c<b&&b<a)+a*(a==b&&b==c)+a*(a==b&&b<c)+a*(a==c&&c<b)+b*(b==c&&c<a)+a*(a<b&&b==c)+b*(b<a&&a==c)+c*(c<a&&a==b), b*(a<b&&b<c)+c*(a<c&&c<b)+a*(b<a&&a<c)+c*(b<c&&c<a)+a*(c<a&&a<b)+b*(c<b&&b<a)+a*(a==b&&b==c)+a*(a==b&&b<c)+a*(a==c&&c<b)+b*(b==c&&c<a)+b*(a<b&&b==c)+a*(b<a&&a==c)+a*(c<a&&a==b), c*(a<b&&b<c)+b*(a<c&&c<b)+c*(b<a&&a<c)+a*(b<c&&c<a)+b*(c<a&&a<b)+a*(c<b&&b<a)+a*(a==b&&b==c)+c*(a==b&&b<c)+b*(a==c&&c<b)+a*(b==c&&c<a)+b*(a<b&&b==c)+c*(b<a&&a==c)+b*(c<a&&a==b));
    return 0;
}
