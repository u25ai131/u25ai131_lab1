#include<stdio.h>

int main(){
	int sec;
	printf("enter total seconds: ");
	scanf("%d", &sec);
	int hours = sec/3600;
	int minutes = (sec - hours*3600)/60;
	int seconds = (sec - hours*3600 - minutes*60);
	printf("the time is %d hours, %d minutes and %d seconds", hours, minutes, seconds);
	return 0;
}
