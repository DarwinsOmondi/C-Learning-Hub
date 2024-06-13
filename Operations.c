#include<stdio.h>
/*
Author:Darwins Omondi
Date:6/13/2024
ReNo:BSE-01-0054/2024
*/
int main(){    
       //write code to check if a number is divisable by 5
     int num1,rem1,num2,rem2,num3,num4;

    printf("Please enter a number \t");
    scanf("%d",&num1);
    rem1 = num1%5;
    if (rem1 == 0)
    {
       printf("%d is divisible by 5",num1);
    }else{
        printf("The number %d is not divisible by ",num1);
    }
    


//     //diviible by 11
printf("Please enter your number\t");
scanf("%d", &num2);
rem2 = num2%11;
if (rem2 ==0)
{
    printf("The number %d is divisible by 11",num1);
}else{
    printf("The number %d is not divisible by 11",num1);
}




// if a number is a positive or negative number
printf("Please enter your number\t");
scanf("%d", &num2);
if (num2 < 0)
{
   printf("%d is a negative number",num2);
}else
{
    printf("%d is a positive number",num2);
}





//give a discount of 10%

printf("Please enter your purchase\t");
scanf("%d", &num4);
int max = 5000;
double discount;
if (num4 > max)
{
     discount = (num4*0.1);
     double pay = num4 - discount;
     printf("Your discount is %.1fl pay is %.1fl",discount, pay);
}else
{
    printf("You have no discount your pay is %d", num4);
}




//write a c program to check if a person can vote
int age,strd;
char Natonality;
 printf("Please enter your Natonality\t");
 scanf("%s", &Natonality);
strd = 18;
printf("Please enter your age\t");
scanf("%d", &age);
if (age < strd && Natonality == "Kenya")
{
    printf("You can vote");
}else
{
    printf("You can note vote");
}


//write a c program to check whether a person is eligible for loan

int age;
int income;
 printf("Please enter your age\t");
 scanf("%d", &age);
 printf("Please enter your income\t");
 scanf("%d", &income);
if ( age >= 21 && income >= 21000)
{
    printf("Congratulations you are qualify for the loan");
}else
{
    printf("You are not eligible for the loan");
}
    return 0;
}