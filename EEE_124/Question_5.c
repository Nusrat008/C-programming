//Write a program to calculate area of an ellipse having its axes (minor=4cm, major=6cm).
#include <stdio.h>
#include <stdlib.h>

float pi = 3.1416;

int main()
{
    float minor=4, major = 6,area;
    //minor = 4cm,major = 6cm;
    area = pi * minor * major;
    printf("The Area of ellipse with minor %0.2fcm and major %0.2fcm  is equal %0.3fcm^2\n", minor, major, area);

    return 0;
}
