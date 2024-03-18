//Fahrenheit to Celsius
// C = 9*(F - 32)/5


// #include<stdio.h>

// #include<math.h>

// int main(){
//     float F,C;

//     printf("Enter the temperature in Fahrenheit :\n");
//     scanf("%f",&F);
//     C = 9 * (F - 32)/ 5;
//     printf("The temperature in Celsius : %0.2f\n",C);


//     return 0;
// }

//Celsius to Fahrenheit
// F = (9*C/5) + 32


#include<stdio.h>

#include<math.h>

int main(){
    float F,C;

    printf("Enter the temperature in Celsius :\n");
    scanf("%f",&C);
    F = (9*C/5) + 32;
    printf("The temperature in  Fahrenheit : %0.2f\n",F);


    return 0;
}