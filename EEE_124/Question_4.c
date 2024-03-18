//Write a program to calculate area of a circle having its radius (r=5). 
#include <stdio.h>
#include <stdlib.h>

float pi = 3.1416;

int main()
{
    float radius = 5.00,area;
    area = pi * radius * radius;
    printf("The Area of circle with radius %0.2f is equal %0.2f\n",radius,area);

    return 0;
}
