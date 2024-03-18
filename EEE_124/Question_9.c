/*Write a C program to prompt the user to input 3 integer values and print these values in 
forward and reversed order. */
#include<stdio.h>
#include<conio.h>
int main(){
int n1, n2, n3;
printf("Enter Three integer: ");
scanf("%d%d%d",&n1,&n2,&n3);
printf("The Forward Order: %d  %d  %d\n", n1, n2, n3);
printf("The Reverse Order: %d  %d  %d\n", n3, n2, n1);
getch();
return 0;
}
