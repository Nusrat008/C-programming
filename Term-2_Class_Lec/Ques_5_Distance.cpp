#include<stdio.h>
int main(){
    float a,t,u;
    float s;
    printf("Please, enter the value of a ,t ,u : \n");
    scanf("%f %f %f",&a,&t,&u);
    s = ( (u*t) + (a*(t*t)/2) );
    printf("The distance is: %.2f\n",s);
    return 0;
}
