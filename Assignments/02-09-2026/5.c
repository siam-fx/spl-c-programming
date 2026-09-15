// Write a C program that takes an integer input from the user and displays it.

#include <stdio.h>

int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("You entered: %d", num);

    return 0;
}