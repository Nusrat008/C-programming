// Addition Subtraction Multiplication and Division using the function

#include <stdio.h>
  
float addition(float num1, float num2);
float subtraction(float num1, float num2);
float multiplication(float num1, float num2);
float division(float num1, float num2);
  
int main()
{
    float n1,n2;
    
    printf("Enter  two numbers: ");
    scanf("%f %f",&n1,&n2);
    
    printf("Sum =         %.3f", addition(n1, n2));
    printf("\nDifference  = %.3f", subtraction(n1, n2));
    printf("\nProduct =     %.3f", multiplication(n1, n2));
    printf("\nDivision =    %.3f", division(n1, n2));
    
    return 0;
}

float addition(float num1, float num2)
{
    float sum;
    sum = num1 + num2;
    return sum;
}
float subtraction(float num1, float num2)
{
    float subtract;
    subtract = num1 - num2;
    return subtract;
}
float multiplication(float num1, float num2)
{
    int product;
    product = num1 * num2;
    return product;
}
float division(float num1, float num2)
{
    float div;
    div = (float)num1 / num2;
    return div;
}



// # Code==2

// C program for addition subtraction multiplication and division using the function

// #include<stdio.h>
// #include<math.h>

// int main(){
    

//     return 0;
// }


// //   ## Code = 1
// #include <stdio.h>
  
// int getSum(int num1, int num2);
// int getDifference(int num1, int num2);
// int getProduct(int num1, int num2);
// float getQuotient(int num1, int num2);
// int getModulo(int num1, int num2);
  
// int main(){
//     /* Variable declation */
//     int firstNumber, secondNumber;
//     int sum, difference, product, modulo;
//     float quotient;
    
//     /* Taking input from user and storing it in firstNumber and secondNumber */
//     printf("Enter First Number: ");
//     scanf("%d", &firstNumber);
//     printf("Enter Second Number: ");
//     scanf("%d", &secondNumber);
    
//     /* Adding two numbers */
//     sum = getSum(firstNumber, secondNumber);
//     /* Subtracting two numbers */
//     difference = getDifference(firstNumber, secondNumber);
//     /* Multiplying two numbers*/
//     product = getProduct(firstNumber, secondNumber);
//     /* Dividing two numbers */
//     quotient = getQuotient(firstNumber, secondNumber);
//     /* Remainder when firstNumber is divided by secondNumber*/
//     modulo = getModulo(firstNumber, secondNumber);
    
//     printf("\nSum = %d", sum);
//     printf("\nDifference  = %d", difference);
//     printf("\nMultiplication = %d", product);
//     printf("\nDivision = %.3f", quotient);
//     printf("\nRemainder = %d", modulo);
    
//     getch();
//     return 0;
// }
  
// /*
// * Function to add two numbers
// */
// int getSum(int num1, int num2){
//     int sum;
//     sum = num1 + num2;
//     return sum;
// }
  
// /*
// * Function to subtract two numbers
// */
// int getDifference(int num1, int num2){
//     int difference;
//     difference = num1 - num2;
//     return difference;
// }
  
// /*
// * Function to multiply two numbers
// */
// int getProduct(int num1, int num2){
//     int product;
//     product = num1 * num2;
//     return product;
// }
  
// /*
// * Function to divide two numbers
// */
// float getQuotient(int num1, int num2){
//     float quotient;
//     quotient =
//      (float)num1 / num2;
//     return quotient;
// }
  
// /*
//  * Function to return remainder when one
//  * number is divided by other number
//  */
// int getModulo(int num1, int num2){
//     int modulo;
//     modulo = num1 % num2;
//     return modulo;
// }




//# Code = 2 
// #include<stdio.h>
// void main()
// {
//     int a,b,c,d,e,f;
//     clrscr();
//     printf("Enter Two Values :");
//     scanf("%d%d",&a,&b);
//     sum(a,b);
//     mult(a,b);
//     div(a,b);
//     getch();
// }
//     sum(int x,int y)
//       {
//             int z;
//             z=x+y;
//             printf("Addtion : %d\n",z);
//             return 0;
//       }
//     mult(int x,int y)
//      {
//             int z;
//             z=x*y;
//             printf("Multiply : %d\n",z);
//             return 0;
//       }
//     div(int x,int y)
//      {
//             int z;
//             z=x/y;
//             printf("Div : %d\n",z);
//             return 0;
//       }


