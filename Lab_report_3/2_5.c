#include<stdio.h>
#include<math.h>
int palindrome(int n);
int main(){
   int num, reverse;
   printf("Enter an integer: ");
   scanf("%d",&num);
   //reverse =palindrome(num);
   if(num==palindrome(num))
      printf("%d is a Palindrome number",num);
   else
      printf("%d is not a Palindrome number",num);
   return 0;
}
int palindrome(int n){
   int rem ,rev;
   rev = 0;
   while(n > 0){
        rem = n % 10;
        rev = (rev * 10) + rem;
        n = n / 10;
    }
   return rev;
 }
 
