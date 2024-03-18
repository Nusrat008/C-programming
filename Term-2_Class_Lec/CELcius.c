#include<stdio.h>
#define MIN 0
#define MAX 250
#define ST 25

int main()
{
    float far = MIN,cel;
    while(far<=MAX){

        cel = (far - 32)/1.8;
        printf("far = %f;cel = %f\n",far,cel);
        far +=ST;
    }
    return 0;


}
