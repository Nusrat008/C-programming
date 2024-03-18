#include<stdio.h> 
//function prototype
void find_even_odd(int number); 
int main(){
      printf("ID : 1902041\n"); 
      int num;
      //Take input an integer
      printf("Enter an integer: ");
      scanf("%d", &num);
      //calling the function
      find_even_odd(num);
      return 0;
}
 //Function definition
void find_even_odd(int number){
    if(number%2==0)
        printf("%d is an EVEN number\n",number);
    else
        printf("%d is an ODD number\n",number);
}
 