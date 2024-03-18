#include<stdio.h>
#include<math.h>
//#define n 3
int main(){

    int c;
    float sum,aveg,num;
    const int n=2;
    
    sum =0;
    c=0;
    while(c<n){
        scanf("%f",&num);
        sum = sum + num;
        c = c+1;
    }
    printf("\n");
    aveg = sum/n;
 
    printf("n= %d sum = %.2f\n",n,sum);
    printf("average = %.2f",aveg);

    return 0;
}