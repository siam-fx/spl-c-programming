// Write a C program to check if a given year is a leap year using the ternary operator.

#include <stdio.h>

int main() {
    int year;

    // Taking the year as input
    printf("Enter a year: ");
    scanf("%d", &year);

    // Checking whether the year is a leap year
    (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        ? printf("%d is a leap year.\n", year)
        : printf("%d is not a leap year.\n", year);

    return 0;
}