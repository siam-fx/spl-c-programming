// Write a C program to determine if a person is eligible to vote based on their age and citizenship status. The person must be at least 18 years old and a citizen. Accept citizenship status (1 for citizen, 0 for non-citizen) from the user.

#include <stdio.h>

int main() {
    int age, citizen;

    // Taking age and citizenship status as input
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter citizenship status (1 for citizen, 0 for non-citizen): ");
    scanf("%d", &citizen);

    // Checking voting eligibility using the ternary operator
    (age >= 18 && citizen == 1)
        ? printf("You are eligible to vote.\n")
        : printf("You are not eligible to vote.\n");

    return 0;
}