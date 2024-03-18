#include<stdio.h> 
int main(){ 
    int a,b,c,l,s; 
    printf("Enter Three numbers integer:\n");   
    scanf ("%d %d %d", &a, &b, &c);    
    if((a>b) && (a>c)){
        l = a;   
        printf("%d is a largest number\n", a); 
        
    }
    else if ((b>a) && (b>c)){   
        printf("%d is a largest number\n", b);   
        l = b;
        
    }
        else {
            printf("%d is a largest number\n", c);   
            l = c;
        }
        if(l%2==0){
            printf("%d is even\n",l);
        }
            else{
            printf("%d is odd\n",l);
          }  
        if((a<b) && (a<c)){ 
            s = a;      
          printf("%d is a smallest number\n", a);  

        } 
        else if ((b<a) && (b<c)){     
            s = b; 
           printf("%d is a smallest number\n", b); 
        }
    else{     
        s = c;
        printf("%d is a smallest number\n", c); 
    }
    if(s%2==0){
            printf("%d is even\n",s);
    }
            else
            printf("%d is odd\n",s);
        
    
     return 0;
} 
