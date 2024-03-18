#include <stdio.h>
#include <stdlib.h>

float pi = 3.1416;

int main()
{
    float radius = 5.00,area;
    area = pi * radius * radius;
    printf("The Area of circle with radius %f is equal %.2f\n",radius,area);

    return 0;
}

