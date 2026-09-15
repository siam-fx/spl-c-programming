/*Design a C program that takes an input temperature in Celsius using the scanf function and converts
it to Fahrenheit. Use the formula:
Fahrenheit = (Celsius × 9/5) + 32*/

#include <stdio.h>

int main(){
    float Celsius , Fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f" ,&Celsius);

    Fahrenheit = (Celsius * 9/5) + 32;

    printf("Temperature in Fahrenheit: %f" , Fahrenheit);

    return 0;
}