#include<stdio.h>
int main(){
    int num1,num2;
     //Take the first number from the user 
    printf("Please enter the first number:");
    scanf("%d",&num1);

    //take the second number from the user
    printf("Please enter the secon number");
    scanf("%d",&num2);
    //get the sum of the two numbers 

    
   int sum = num1 + num2;
   //display the sum of the two numbers 
    printf("The sum of %d and %d is: %d",num1,num2,sum);

   return 0;
}