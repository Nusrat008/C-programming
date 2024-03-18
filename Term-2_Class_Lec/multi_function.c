
#include<stdio.h>
#include<math.h>

int multi(int a,int b);

int main(){
    int a,b;
    printf("enter two integer: ");
    scanf("%d%d",&a,&b);
    printf("The multiflication of two numbers: %d",multi(a,b));


}
int multi(int a,int b){
    float mul;
    mul = a*b;
    return mul;
}
