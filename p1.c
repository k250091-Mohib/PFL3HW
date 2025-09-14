#include<stdio.h>
int m1,m2,m3,total;
float percentage;
int main(){
    printf("Please enter the marks of subject 1: ");
    scanf("%d",&m1);
    printf("Please enter the marks of subject 2: ");
    scanf("%d",&m2);
    printf("Please enter the marks of subject 3: ");
    scanf("%d",&m3);
    total = m1 + m2 + m3;
    percentage = (total / 3.0);
    printf("Total: %d\n", total);
    printf("Percentage: %.2f%%", percentage);
}
