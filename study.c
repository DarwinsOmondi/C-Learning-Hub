/*
Author: Darwins
This is a simple C calculator program
*/

// #include <stdio.h>

// int main() {
    // float num1, num2;
    // char operator;

    // printf("Enter two numbers: ");
    // scanf("%f %f", &num1, &num2);

    // printf("Enter an operator (+, -, *, /): ");
    // scanf(" %c", &operator); 


    // switch (operator) {
    //     case '+':
    //         printf("Sum of %.2f and %.2f is %.2f\n", num1, num2, num1 + num2);
    //         break;
    //     case '-':
    //         printf("Difference of %.2f and %.2f is %.2f\n", num1, num2, num1 - num2);
    //         break;
    //     case '*':
    //         printf("Product of %.2f and %.2f is %.2f\n", num1, num2, num1 * num2);
    //         break;
    //     case '/':
    //         if (num2 != 0)
    //             printf("Quotient of %.2f and %.2f is %.2f\n", num1, num2, num1 / num2);
    //         else
    //             printf("Error: Division by zero is undefined.\n");
    //         break;
    //     default:
    //         printf("Error: Unsupported operator.\n");
    // }
//         return 0;
// }

#include <stdio.h>

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main function
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}