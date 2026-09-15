// Write a C program to find the smallest among three integers using the ternary operator.

#include <stdio.h>

int main() {
    int num1, num2, num3, smallest;

    // Taking three integers as input
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Finding the smallest using nested ternary operators
    smallest = (num1 < num2) ?
               ((num1 < num3) ? num1 : num3) :
               ((num2 < num3) ? num2 : num3);

    // Displaying the smallest number
    printf("The smallest number is: %d\n", smallest);

    return 0;
}