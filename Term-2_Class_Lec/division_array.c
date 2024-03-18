

#include<stdio.h>
#include<math.h>

float div(float a,float b);

int main(){
    float a,b;
    printf("enter two integer: ");
    scanf("%d%d",&a,&b);
    printf("The multiflication of two numbers: %lf",div(a,b));


}
float div(float a,float b){
    float mul;
    mul = a/b;
    return mul;
}
