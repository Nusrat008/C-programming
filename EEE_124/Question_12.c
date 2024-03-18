/*Write a program to check odd or even number (a) using modulus operator*/  
#include<stdio.h>
int main()
{
    int num;
    printf("Enter an integer number: \n");
    scanf("%d", &num);
    if ( num%2 == 0 )
    printf("%d is Even\n",num);
    else
      printf("%d is Odd\n",num);
    return 0;
}
     