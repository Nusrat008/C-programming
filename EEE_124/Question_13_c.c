/*Print the value of y for given x=2 & z=4 and analyze the output.c. y= ++x + ++x + ++x;*/
#include<stdio.h>
int main(){
    int x = 2,z = 4,y;
    y= ++x + ++x + ++x;
    printf("Y = %d\n", y);
    return 0;
}
