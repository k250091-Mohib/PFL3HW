#include<stdio.h>
int num1,num2,temp;
int main (){
	printf("Enter number 1: ");
	scanf("%d",&num1);
	printf("Enter number 2: ");
	scanf("%d",&num2);
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("Number 1 = %d",num1);
	printf("\n");
	printf("Number 2 = %d",num2);	
}
