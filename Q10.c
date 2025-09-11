#include<stdio.h>

int main(){
	int maths, physics, chemistry, entrance;
	printf("Enter maths marks: ");
	scanf("%d", &maths);
	printf("Enter physics marks: ");
	scanf("%d", &physics);
	printf("Enter chemistry marks: ");
	scanf("%d", &chemistry);
	printf("Enter entrance marks: ");
	scanf("%d", &entrance);
	float CutOff = maths/2.0 + physics/2.0 + chemistry/2.0 + entrance;
	printf("The Cutoff Marks is: %f", CutOff);
	return 0;
}
