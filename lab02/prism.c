#include<stdio.h>
int main()
{
	int length, width, height;
	printf("Please enter prism length:");
	scanf("%d", &length);
	printf("Please enter prism width:");
	scanf("%d", &width);
	printf("Please enter prism height:");
	scanf("%d", &height);
	printf("A prism with sides %d %d %d has:\n", length, width, height);
	printf("Volume      = %d\n", length*width*height);
	printf("Area        = %d\n", 2*(length*width+length*height+width*height));
	printf("Edge length = %d\n", 4*(length+width+height));
	return 0;
}
