#include<stdio.h>
#include<math.h>
#include<conio.h>


int main(){
    int a,b,c;
    float d,e,f;
    a = 10,b = 20;

    //c = !(5 + 5>=10)? 1:0;                    Ans : c=false,0

    //c = (5 + 5 ==10 || 1+3 ==5)? 1:0;         Ans: c=true ,1
    
    //c = (10!=15 && !(10<20) || 15>30)? 1:0;   Ans : c=false,0
    
    //c = (5 >10 || 10<20 && 3<5)?1:0;          Ans : c = true,1;   

    

    // c = (  20>12 && 20<20) ?  1:0;
    // c = (a/2.0 == 0.0 && b/2.0 != 0.0) || c < 0.0;
    //printf("w = %d", 20|12);
    // printf("%d\n",c);
    // a=100;
     
    int x = 100;
    printf("%d/n", 10 + x++);
    printf("%d/n", 10 + ++x);
    // for(a = 0;a<3;++a)
    // printf("%d/n",(a%2) ? a:a+2);







    getch();
    return 0;
}