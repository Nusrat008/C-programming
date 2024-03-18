/*Print the value of y for given x=2 & z=4 and analyze the output.g.y= x>>2 + z<<1;*/
#include<stdio.h>
int main(){
    int x = 2,z = 4,y;
    y= x>>2 + z<<1; 
    printf("Y = %d\n", y);
    return 0;
}
