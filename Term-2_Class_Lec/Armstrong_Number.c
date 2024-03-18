#include <stdio.h>
#include <math.h>
int main() {
   int num, rem, digit = 0, armstrong;
   float sum = 0;;
   printf("Enter an integer: ");
   scanf("%d", &num);
   armstrong = num;
   for (armstrong = num; armstrong != 0; ++digit) 
   {
       armstrong /= 10;
   }
   for (armstrong = num; armstrong != 0; armstrong /= 10)
    {
       rem = armstrong % 10;
       sum += pow(rem, digit);
   }
   if ((int)sum == num)
    printf("%d is an Armstrong number.", num);
   else
    printf("%d is not an Armstrong number.", num);
   return 0;
}


//    ##  Extra  ##





// #include<stdio.h>
// int main()
// {
//    int num,copy_of_num,sum=0,rem;

//    //Store input number in variable num
//    printf("\nEnter a number:");
//    scanf("%d",&num);

//    /* Value of variable num would change in the
//       below while loop so we are storing it in 
//       another variable to compare the results 
//       at the end of program
//    */
//    copy_of_num = num;

//    /* We are adding cubes of every digit
//     * and storing the sum in variable sum
//     */ 
//    while (num != 0)
//    {
//       rem = num % 10;
//       sum = sum + (rem*rem*rem);
//       num = num / 10;
//    }

//    /* If sum of cubes of every digit is equal to number
//     * itself then the number is Armstrong
//     */
//    if(copy_of_num == sum)
//       printf("\n%d is an Armstrong Number",copy_of_num);
//    else
//       printf("\n%d is not an Armstrong Number",copy_of_num);
//    return(0);
// }

// #include <stdio.h>

// int main() {
//    int num, originalNum, remainder, n = 0;
//    float result = 0.0;

//    printf("Enter an integer: ");
//    scanf("%d", &num);

//    originalNum = num;

//    // store the number of digits of num in n
//    for (originalNum = num; originalNum != 0; ++n) {
//        originalNum /= 10;
//    }

//    for (originalNum = num; originalNum != 0; originalNum /= 10) {
//        remainder = originalNum % 10;

//       // store the sum of the power of individual digits in result
//       result += pow(remainder, n);
//    }

//    // if num is equal to result, the number is an Armstrong number
//    if ((int)result == num)
//     printf("%d is an Armstrong number.", num);
//    else
//     printf("%d is not an Armstrong number.", num);
//    return 0;
// }







// // C++ Program to find
// // Nth Armstrong Number
// #include<bits/stdc++.h>
// #include<math.h>
// using namespace std;

// // Function to find Nth Armstrong Number
// int NthArmstrong(int n)
// {
// 	int count=0;
	
// 	// upper limit from integer
// 	for(int i = 1; i <= INT_MAX; i++)
// 	{
// 		int num=i, rem, digit=0, sum=0;
		
// 		//Copy the value for num in num
// 		num = i;
		
// 		// Find total digits in num
// 		digit = (int) log10(num) + 1;
		
// 		// Calculate sum of power of digits
// 		while(num > 0)
// 		{
// 			rem = num % 10;
// 			sum = sum + pow(rem,digit);
// 			num = num / 10;
// 		}
// 		// Check for Armstrong number
// 		if(i == sum)
// 			count++;
// 		if(count==n)
// 			return i;
// 	}
// }

// // Driver Function
// int main()
// {
// 	int n = 12;
// 	cout<<NthArmstrong(n);
// 	return 0;
// }


// // This Code is Contributed by 'jaingyayak'
