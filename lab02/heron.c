#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, s;
	double area;
	printf("Enter side 1:");
	scanf("%lf", &a);
	printf("Enter side 2:");
	scanf("%lf", &b);
	printf("Enter side 3:");
	scanf("%lf", &c);
	s = (a + b + c)/2;
	if(s<=a||s<=b||s<=c)
	{
		printf("Error: triangle inequality violated.\n");
	}
	else{
		area = sqrt(s*(s-a)*(s-b)*(s-c));
		printf("Area = %lf\n", area);
	}
	return 0;
}
