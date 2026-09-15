/*Write a C program to classify a person's age into one of the following categories:
"Child" for age <= 12
"Teenager" for age between 13 and 19
"Adult" for age between 20 and 64
"Senior" for age >= 65*/

#include <stdio.h>

int main() {
    int age;

    // Taking age as input
    printf("Enter your age: ");
    scanf("%d", &age);

    // Classifying age using nested ternary operators
    (age <= 12)
        ? printf("Child\n")
        : (age <= 19)
            ? printf("Teenager\n")
            : (age <= 64)
                ? printf("Adult\n")
                : printf("Senior\n");

    return 0;
}