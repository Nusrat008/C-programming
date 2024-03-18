#include<stdio.h>
#include<math.h>

#define MAX 100
#define MIN 2

int main(){
    int a;
     a = MIN;
     while(a<=MAX){

            printf("%3d",a);
            a *= a;
     }


    return 0;
}