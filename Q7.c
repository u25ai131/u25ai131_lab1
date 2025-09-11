#include<stdio.h>
int main()
{
	int base, height;
    printf("The value of base of triangle = ");
    scanf("%d", &base);
    printf("The value of height of triangle = ");
    scanf("%d", &height);
    float area;
    area = (base*height)/2.0;
    printf("The area of triangle = %f", area);
    return 0;
}
