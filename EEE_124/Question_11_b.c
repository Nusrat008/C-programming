//Write a program to swap two variables values  without using third variables #include<stdio.h>
#include<stdio.h>
int main(){
 int n1, n2;
 printf("Enter two integers: ");
 scanf("%d %d",&n1,&n2);
 printf("Before swaping: num1 = %d and num2 = %d \n",n1,n2);
 n1 = n1^n2;
 n2= n1^n2;
 n1 = n1^n2;
 printf("After  swaping: num1 = %d and num2 = %d\n",n1,n2);
 return 0;
}
