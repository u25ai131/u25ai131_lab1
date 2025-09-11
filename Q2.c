#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	float f,g;
	printf("Enter Maths marks = ");
	scanf("%d", &a);
	printf("Enter English marks = ");
	scanf("%d", &b);
	printf("Enter Science marks = ");
	scanf("%d", &c);
	printf("Enter Sanskrit marks = ");
	scanf("%d", &d);
	printf("Enter Social Studies marks = ");
	scanf("%d", &e);
	f=(a+b+c+d+e)*1.0;
	printf("Your Total = %f\n", f);
	g=f/5.0;
	printf("Your Percentage = %f\n", g);
    return 0;
	
}
