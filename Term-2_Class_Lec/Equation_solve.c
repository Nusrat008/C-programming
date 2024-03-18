#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){

    float a,b,c,dis,r1,r2;
    printf("Enter value of a,b and c\n");
    scanf("%f %f %f",&a,&b,&c);

    dis = (b*b - 4*a*c);
    if(dis<0){
        printf("\nThe roots are imaginary \n");
    }
    else{
        r1 = (-b + sqrt(dis))/(2*a);
        r2 = (-b - sqrt(dis))/(2*a);
        printf("Root1 = %5.2f\n Root2 = %5.2f\n",r1,r2);
    }

    return 0;
}