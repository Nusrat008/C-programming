//*Write a program to check odd or even number (b) using bitwise operator 
#include <stdio.h>
int main(){
    int num;
    printf("Enter an integer number: ");
    scanf("%d", &num);
    (num & 1) 
        ? printf("%d is odd.", num) 
        : printf("%d is even.", num);
    return 0;
}