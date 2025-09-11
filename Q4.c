#include<stdio.h>
int main()
{
	
	float fahrenheit, centigrade;
	printf("\n Enter the value of temperature in Fahrenheit = ", fahrenheit);
	scanf("%f",&fahrenheit);
    centigrade = (5.0*(fahrenheit-32))/9.0;
	printf("\n Temperature in centigrade = %f", centigrade);
    return 0;
}
