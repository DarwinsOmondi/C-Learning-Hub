#include <stdio.h>

int main() {
    int children;   // Corrected spelling from childern to children
    float tax;
    double bill;
    char r;

    printf("Enter the number of children: \t");
    scanf("%d", &children);
    
    printf("Enter the amount of tax: \t");
    scanf("%f", &tax);
    
    printf("Enter your bill: \t");
    scanf("%lf", &bill);   // Use %lf for double

    printf("Enter the special character: \t");
    scanf(" %c", &r);   // Include a space before %c to consume any leftover whitespace

    printf("The number of childern is :%d\t\n", children);
    printf("Your tax pay is :%.1f\t\n", tax);
    printf("This is your bill :%.6f\t\n", bill);
    printf("The spacial character is :%c\t\n", r);

    return 0;
}
