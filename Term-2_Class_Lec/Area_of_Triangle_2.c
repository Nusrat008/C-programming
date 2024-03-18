//Find the area of Triangle 
//Area = (s * (s-a) * (s-b) * (s-c)) 
// s = (a + b + c)/2

#include<stdio.h>
#include<math.h>

int main(){
    float  a,b,c;
    float s;
    float area;

    printf("Enter the length of triangle a, b and c\n");
    scanf("%f %f %f",&a,&b,&c);

    s = (a + b + c)/2;
    area = sqrt(s* (s-a) * (s-b) * (s-c));

    printf("The area of Triangle is: %.2f\n",area);


    return 0;

}