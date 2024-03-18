//Find distance traveled by a vehicle

#include<stdio.h>
#include<math.h>


int main(){
    float u , t, a;
    float dis;
    //u = 25.1 ms-1; a = 5 ms-2
    u = 25.1;
    a = 5;
    printf("Enter the value of u, a and t  : \n");
    scanf("%f %f %f",&u,&a,&t);
    printf("\n");
    dis = (u*t) + (a* (t*t)) / 2 ;
    printf("The distance  is : %0.2f\n",dis);

    return 0;
}