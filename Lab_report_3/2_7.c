#include <stdio.h>
#include <math.h>
int main(){
    int num, sum, digits, firstDigit, lastDigit;
    sum = 0;
    printf("Enter a four digit number: ");
    scanf("%d", &num);
    lastDigit = num % 10;
    digits  = (int) log10(num); 
    firstDigit = (int) (num / pow(10, digits)); 
    sum = firstDigit + lastDigit; 
    printf("Sum of first and last digit = %d", sum);
    return 0;
}