/*Write a program to declare two integer and one float variables then initialize them to 10, 
15, and 12.6. Also print the variable values in the screen. 
*/
#include<stdio.h>

int main()
{
    int num1, num2;
    float num3;+
    num1 = 10, num2 = 15;
    num3 = 12.6;
    printf("Two Integer numbers are: %d and %d\n", num1, num2);
    printf("Float Number: %0.1f\n",num3);

    return 0;
}