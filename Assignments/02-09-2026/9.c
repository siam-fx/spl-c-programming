//Write a C program that takes two floating-point numbers as inputs using the scanf function and calculates their product.

#include <stdio.h>

int main(){
    float num1 , num2 , product;

    printf("Enter two floating-point numbers: ");
    scanf("%f %f" , &num1 , &num2);

    product = num1 * num2;

    printf("Product = %f" , product);

    return 0;
}
