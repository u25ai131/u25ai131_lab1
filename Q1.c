#include<stdio.h>
int main()
{
	
	float a,b,c,d;
	printf("Enter Principle Amount = ");
	scanf("%f", &a);
	printf("Enter Rate Of Interest = ");
	scanf("%f", &b);
	printf("Enter year = ");
	scanf("%f", &c);
	d=(a*b*c)/100.0;
	printf("Simple interest is %.5f", d);
    return 0;
}