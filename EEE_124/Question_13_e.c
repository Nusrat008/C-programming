/*Print the value of y for given x=2 & z=4 and analyze the output. e. y= x>z? x:z;*/
#include<stdio.h>
int main(){
    int x = 2,z = 4,y;
    y= x>z? x:z;
    printf("Y = %d\n", y);
    return 0;
}
