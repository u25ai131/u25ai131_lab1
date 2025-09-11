#include<stdio.h>

int main(){
    int BasicSalary;
    int HouseRent;
    int Allowance;
    int Bonus;
    printf("Enter your basic salary: ");
    scanf("%d", &BasicSalary);
    printf("Enter your House rent allowance: ");
    scanf("%d", &HouseRent);
    printf("Enter your other allowances: ");
    scanf("%d", &Allowance);
    printf("Enter your bonus amount: ");
    scanf("%d", &Bonus);
    int GrossSalary = BasicSalary + HouseRent + Allowance + Bonus;
    printf("Your total gross salary is: %d", GrossSalary);
    return 0;
}