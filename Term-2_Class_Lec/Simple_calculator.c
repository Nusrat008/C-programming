//simple Calculator using switch case statements


#include<stdio.h>
#include<conio.h>
 
int main() {
    char operator;
    float num1,num2,result; 
     
    printf("Enter an expression for calculating:");
    scanf("%f %c %f", &num1,&operator, &num2);
 
    switch(operator) {
        case '+': 
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        case '%':
            result = (int)num1 % (int)num2;
            break;   
        default: 
            printf("\nInvalid Operation");
    }
    printf("\n%.3f %c %.3f = %.3f",num1,operator,num2,result);
    
    return 0;
}







// #include <stdio.h>
 
// int main()
// {
//     int num1,num2;
//     float result;
//     char ch;    //to store operator choice
     
//     printf("Enter first number: ");
//     scanf("%d",&num1);
//     printf("Enter second number: ");
//     scanf("%d",&num2);
     
//     printf("Choose operation to perform (+,-,*,/,%): ");
//     scanf(" %c",&ch);
     
//     result=0;
//     switch(ch)    
//     {
//         case '+':
//             result=num1+num2;
//             break;
             
//         case '-':
//             result=num1-num2;
//             break;
         
//         case '*':
//             result=num1*num2;
//             break;
             
//         case '/':
//             result=(float)num1/(float)num2;
//             break;
             
//         case '%':
//             result=num1%num2;
//             break;
//         default:
//             printf("Invalid operation.\n");
//     }
 
//     printf("Result: %d %c %d = %f\n",num1,ch,num2,result);
//     return 0;
// }



// #include<stdio.h> // include stdio.h library

// int main(void)
// {       
//     int a, b, result;
//     char op; // to store the operator
    
//     printf("Enter an expression(+,-,*,/,%): ");
//     scanf("%d %c %d", &a, &op, &b);

//     switch(op)
//     {
//         case '+':
//             result = a + b;
//             break;
//         case '-':
//             result = a - b;
//             break;
//         case '*':  
//             result = a * b;
//             break;
//         case '/':
//             result = a / b;
//             break; 
//         case '%':
//             result = a % b;
//             break;             
//     }
    
//     printf("Result = %d\n", result);
    
//     return 0; // return 0 to operating system
// }


// #include<stdio.h>
// #include<conio.h>
 
// int main() {
//     char operator;
//     float num1,num2;
     
//     printf("Enter two numbers as operands\n");
//     scanf("%f%f", &num1, &num2);
//     printf("Enter an arithemetic operator(+-*/)\n");
//     scanf("%*c%c",&operator);
 
//     switch(operator) {
//         case '+': 
//          printf("%.2f + %.2f = %.2f",num1, num2, num1+num2);
//          break;
//         case '-':
//                 printf("%.2f - %.2f = %.2f",num1, num2, num1-num2);
//                 break;
//         case '*':
//                 printf("%.2f * %.2f = %.2f",num1, num2, num1*num2);
//                 break;
//         case '/':
//                 printf("%.2f / %.2f = %.2f",num1, num2, num1/num2);
//                 break;
//         default: 
//                 printf("Invalid Operation");
//     }
     
//     getch();
//     return 0;
// }