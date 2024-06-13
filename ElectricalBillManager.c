/*
Author: Darwins Omondi
Date: 6/13/2024
ReNo: BSE-01-0054/2024
*/
// A simple electric bill manager
#include <stdio.h>

int main() {
    int CustomerID, UnitConsumed;
    char CustomerName[50];
    float Bill;
    float percentage = 0.15;
    float extra;
    float TotalPay;

    printf("Please Enter your CustomerID: ");
    scanf("%d", &CustomerID);

    printf("Please Enter your Customer Name: ");
    scanf("%s", CustomerName);

    printf("Please Enter the Units Consumed: ");
    scanf("%d", &UnitConsumed);

    if (UnitConsumed <= 199) {
        Bill = UnitConsumed * 1.20;
    } else if (UnitConsumed >= 200 && UnitConsumed < 400) {
        Bill = UnitConsumed * 1.50;
    } else if (UnitConsumed >= 400 && UnitConsumed < 600) {
        Bill = UnitConsumed * 1.80;
    } else {
        Bill = UnitConsumed * 2.00;
    }

    if (Bill < 100) {
        TotalPay = 100;
    } else if (Bill > 400) {
        extra = Bill * percentage;
        TotalPay = Bill + extra;
    } else {
        TotalPay = Bill;
    }

    printf("%s, your bill is Ksh %.2f\n", CustomerName, TotalPay);
    
    return 0;
}
