#include<stdio.h>

int main(){
	int a, b, c, d, e;
	printf("Enter marks of subject 1: ");
	scanf("%d", &a);
	printf("Enter marks of subject 2: ");
	scanf("%d", &b);
	printf("Enter marks of subject 3: ");
	scanf("%d", &c);
	printf("Enter marks of subject 4: ");
	scanf("%d", &d);
	printf("Enter marks of subject 5: ");
	scanf("%d", &e);
	float per = ((a + b + c + d + e))*100.0/500;
	if (per >= 60){
		printf("First Division");
	}
	else if(per <60 && per >= 50){
		printf("Second Divison");
	}
	else if(per < 50){
		printf("Third Division");
	}
	return 0;
}
