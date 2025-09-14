#include<stdio.h>
float basicSalary, grossSalary, HRA, DA;
int main(){
    printf("Please enter your basic salary Rs.: ");
    scanf("%f", &basicSalary);
    HRA = basicSalary * 0.10;
    DA = basicSalary * 0.05;
    grossSalary = basicSalary + HRA + DA;  
    printf("Your Gross Salary is Rs.: %.2f", grossSalary);
    return 0;
}
