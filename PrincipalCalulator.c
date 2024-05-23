#include <stdio.h>
#include <math.h>  // For the pow function

double principal;   
double rate;
int time;
double compoundInterest;

int calculatePrincipal();  // Function declaration

int main() {
    calculatePrincipal();
    return 0;
}

int calculatePrincipal() {
    printf("Please enter your principal: ");
    scanf("%lf", &principal);
    
    printf("Please enter your rate (as a decimal): ");
    scanf("%lf", &rate);
    
    printf("Please enter the duration (in years): ");
    scanf("%d", &time);
    
    compoundInterest = principal * pow((1 + rate), time) - principal;
    
    printf("The compound interest is: %.2lf\n", compoundInterest);  //format the output with 2 decimal places
    
    return 0;
}
