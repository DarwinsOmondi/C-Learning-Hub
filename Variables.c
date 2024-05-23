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

    printf("%d\n", children);
    printf("%.1f\n", tax);
    printf("%.6f\n", bill);
    printf("%c\n", r);

    return 0;
}
