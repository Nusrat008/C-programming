#include<stdio.h>
long int multiplyNumbers(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, multiplyNumbers(n));
    return 0;
    //Extra
    for(int j=3;j<=15;j+=2){
        printf("Factorial = %d\n",multiplyNumbers(j));
    }
}

long int multiplyNumbers(int n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}




// int fact(int);
// void main()
// {
// int num;
// printf("enter a number"); 
// scanf("%d",&num); 
// f=fact(num); 
// printf("factorial is =%d\n"f);
// }
// fact (int num)
// {
//      If (num==0||num==1)
//     return 1; 
//     return(num*fact(num-1));
// }




// #include<stdio.h>
// #include<math.h>

// int factorial(int n);

// int main(){
    
//     int i=3;

//     for(;i<=15;i+=2){

//         printf("Fact(%d) = %f\n",i,factorial(i));
//     }

//     return 0;
// }

// int factorial(int n) 
//  {
//  int fact;
//  if(n>1){
//     fact = n*factorial(n-1);
//     return fact;
//  }
//  else 
//   return 1;

//  }



// // int fact(int n){
// //     int f;
// //     if(n==1)
// //         return(1);
// //     else
// //         f = n*fact(n-1);
// //         return(f);
// // }
// // int factorial(int num)
// // {
// //     int fact;
// //     if(num==0 || num==1)
// //         return 1;
// //     else
// //         fact = num*factorial(num-1);
// //     return (fact); 
// // }