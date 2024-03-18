/*Using cosine function */
/* y = cos(x)*/
#include<stdio.h>
#include<math.h>

#define PI 3.14
#define MAX 180

int main(){
    int angle;
    float x,y;

    angle = 0;
    while(angle<=MAX)
    {
        x = (PI *angle / 180);
        y = cos(x);
        printf("cos(%3d)  %12.2f\n",angle,y);
        angle  = angle + 10;
    }

    return 0;
}



