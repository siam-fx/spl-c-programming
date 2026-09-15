//Write a C program that takes a float input from the user and displays it.

#include <stdio.h>

int main(){
    float num;

    printf("Enter a float number: ");
    scanf("%f" , &num);

    printf("You entered: %f" , num);

    return 0;
}