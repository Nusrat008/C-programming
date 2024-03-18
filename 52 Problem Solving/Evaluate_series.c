#include<stdio.h>

#define LOOP 100
 #define ACCURACY 0.0001
int main(){
    float x,sum,term;
    int i;

    printf("Enter value of x: ");
    scanf("%f",&x);

    sum=0;
    for(term=1,i=1;i<=LOOP;i++ ){
        sum+=term;
        if(term<=ACCURACY){
            printf("Sum = %f;No. of term = %d\n",sum,i);
            break;
        }
        else if(i>=LOOP) {
            printf("Final value of x is not sufficient");
        }
        term*=x;
    }

    return 0;
}
    