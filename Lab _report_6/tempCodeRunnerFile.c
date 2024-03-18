#include<stdio.h>
// sub-function to calculate the sum of two value and return the 
//result to main function.
    //function definition  
    int add(int a, int b){
    int x;
    x=a+b;
    return x;
    }
    int main(){
    printf("ID : 1902008\n");   
    //Initialize two integer value
    int p=10,q=20;
    //function call add(p, q); 
    printf("Sum of two values= %d", add(p,q));
}