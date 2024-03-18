#include <stdio.h>
//Function prototype
int recursum(int n);
int main(){
    printf("ID : 1902041\n");   
    int num=20; 
    //Call function to print summation of 20 natural numbers
    printf("Summation of first %d natural numbers = %d\n",num,recursum(num));
}
// Returns sum of first 20 natural numbers
int recursum(int n){
    if(n<=1)
        return n;
    else 
        return (n+recursum(n-1));
}
 
