/*
Auther:Darwins
Registration:BSE-01-0054/2024
Tempretaure converter 
*/
#include<stdio.h>

float temp, result;
float temp_converter_fahrenheit(float temp);

float userInput, result;

int main() {
    printf("Enter your temperature in Celsius: ");
    scanf("%f", &userInput);

    result = temp_converter_fahrenheit(userInput);

    printf("Temperature in Fahrenheit: %.2f\n", result);

    return 0;
}

float temp_converter_fahrenheit(float temperature) {
    
    temperature = (temperature * 9.0 / 5.0) + 32;

    return temperature;
}
