#include<stdio.h>
#include<math.h>



int main(){
    int a,b,c,d;
    a = 15;
    b = 10;
    c = ++a - b;

    printf("a = %d , b = %d ,c = %d\n",a,b,c);
     d = b++ + a;
     printf("a = %d , b = %d ,d = %d\n",a,b,d);

    printf("a/b = %d\n",a/b);
    printf("a%%b = %d\n",a%b);

    printf("a*=b = %d\n",a*=b);
    printf("c<d : %d\n",c<d ? 1 : 0);
    printf("c>d : %d\n",c>d ? 1 : 0);


    return 0;
}