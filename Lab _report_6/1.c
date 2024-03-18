#include<stdio.h>
#include<conio.h>
//Functions prototype
float Add(float, float);
float Sub(float, float);
float Mul(float, float);
float Div(float, float);
int main(){
    printf("ID : 1902041\n");   
    float num1, num2, res;
    //Take input two number
    printf("Enter any two number: ");
    scanf("%f%f", &num1, &num2);
    //Call function for finding sum of the two numbers
    res = Add(num1, num2);
    //Print sum of two numbers
    printf("\nAddition = %.2f", res);
    //Call function for finding subtraction of the two numbers
    res = Sub(num1, num2);
    //Print subtraction of two numbers
    printf("\nSubtraction = %.2f", res);
    //Call function for finding multiflication of the two numbers
    res = Mul(num1, num2);
    //Print multiflication of two numbers
    printf("\nMultiplication = %.2f", res);
    //Call function for finding Division of the two numbers
    res = Div(num1, num2);
    //Print Division of two numbers
    printf("\nDivision = %.2f", res);
    getch();
    return 0;
}
//Functions definition
float Add(float a, float b){
    return a+b;
}
float Sub(float a, float b){
    return a-b;
}
float Mul(float a, float b){
    return a*b;
}
float Div(float a, float b){
    return a/b;
}