#include<stdio.h>
#include<math.h>



int main(){
    int a,b,c;
    float s,area;
    a = 10;
    b = 14;
    c = 6;

    s = (a+b+c)/2;
    area = sqrt(s * (s-a) * (s-b) * (s-c));
    printf("Area of triangle  is %.2f",area);

    return 0;
}