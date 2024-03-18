//Fahrenheit to Celsius
// C = 9*(F - 32)/5


#include<stdio.h>

#include<math.h>

int main(){
    float F,C;

    printf("Enter the temperature in Fahrenheit :");
    scanf("%f",&F);
    C = 9 * (F - 32)/ 5;
    printf("The temperature in Celsius : %0.2f",C);


    return 0;
}