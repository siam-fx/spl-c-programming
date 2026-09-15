//Write a C program that takes a single character input from the user and displays it.

#include <stdio.h>

int main(){
    char ch;

    printf("Enter a single character: ");
    scanf("%c" , &ch);

    printf("You entered: %c" , ch);

    return 0;
}