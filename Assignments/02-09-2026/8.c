//Write a C program that takes two integer inputs using the scanf function and calculates their sum.

#include <stdio.h>

int main(){
    int num1 , num2 , sum;

    printf("Enter two integer: ");
    scanf("%d %d" , &num1 , &num2);

    sum = num1 + num2;

    printf("Sum = %d" , sum);

    return 0;
}