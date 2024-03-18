#include<stdio.h>
#include<math.h>
int main(){
    int number,sum_of_digits, remainder;
    sum_of_digits = 0;
    printf("Enter an integer: ");
    scanf("%d", &number);
    while (number != 0)
     {
        remainder = number % 10;
        sum_of_digits =sum_of_digits + remainder;
        number = number / 10;
    }
    printf("Sum of digits = %d", sum_of_digits);
    return 0;
}
