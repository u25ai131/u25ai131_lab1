#include<stdio.h>

int main(){
	int hours, minutes, seconds;
    printf("Enter time in hours " );
    scanf("%d", &hours);
    printf("Enter time in minutes " );
    scanf("%d", &minutes);
    printf("Enter time in seconds " );
    scanf("%d", &seconds);
    int s = (hours*60*60) + (minutes*60) + seconds;
    printf("Total seconds = %d", s);
    return 0;
}
