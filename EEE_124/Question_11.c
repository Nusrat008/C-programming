//Write a program to swap two variables values using third variables 
#include<stdio.h>
int main(){
 int num1,num2,temp;
 printf("Enter two integer number: ");
 scanf("%d %d",&num1,&num2);
 printf("Before swaping: num1 = %d and num2 = %d \n",num1,num2);
 temp = num1;
 num1 = num2;
 num2 = temp;
 printf("After  swaping: num1 = %d and num2 = %d\n",num1,num2);
 return 0;
}
