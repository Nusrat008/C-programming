//Write a program to calculate simple interest for a given P=4000, T=2, R=5.5. (I = P*T*R/100)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float P = 4000,T=2,R=5.5,I;
    I = P*T*R/100;
    
    printf("Simple Interest = %0.2f\n", I);

    return 0;
}
