#include<stdio.h>


int main(void){
    int a=25,b= 5, c = 10, d= 7;
    printf("a % %b = %d\n",a%b);
    printf("a % %c = %d\n",a%c);
    printf("a % %d = %d\n",a/d);
    printf("Ans = %i\n",a/d * d+a %d);
    return 0;
}