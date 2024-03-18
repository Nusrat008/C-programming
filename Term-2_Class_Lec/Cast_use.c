#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){

    float sum;
    int n=1;
    while(n<=10){
        sum += 1/(float)n;
        printf("%2d  %6.3f\n",n,sum);
        n++;
    }
    

    return 0;
}