// Write a C program to find the largest among three integers using the ternary operator.

#include <stdio.h>

int main() {
    int num1, num2, num3, largest;

    // Taking three integers as input
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Finding the largest using nested ternary operators
    largest = (num1 > num2) ? 
              ((num1 > num3) ? num1 : num3) : 
              ((num2 > num3) ? num2 : num3);

    // Displaying the largest number
    printf("The largest number is: %d\n", largest);

    return 0;
}