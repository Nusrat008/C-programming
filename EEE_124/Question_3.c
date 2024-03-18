//Write a program to multiply two numbers (10&8) and display its product.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1,num2,product;
    num1 = 10;num2=8;
    product = num1 * num2;
    printf("The product of %.2f and %.2f is equal %.2f\n",num1,num2,product);
    printf("%.2f x %.2f = %.2f\n",num1,num2,product);

    return 0;
}
