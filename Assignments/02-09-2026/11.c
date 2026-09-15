/* Develop a C program that takes two characters as input from the user and displays both characters
along with their respective ASCII values. Use escape sequences to format the output.
Example Output:
If the user enters the characters A and B, the output will be:
You entered the characters: 'A' and 'B'
The ASCII value of 'A' is: 65
The ASCII value of 'B' is: 66*/

#include <stdio.h>

int main(){
    char ch1 , ch2;

    printf("Enter two characters: ");
    scanf("%c %c" , &ch1 , &ch2);

    printf("You entered the characters: '%c' and '%c'\n" , ch1 , ch2);
    printf("The ASCII value of '%c' is: %d\n" , ch1 , ch1);
    printf("The ASCII value of '%c' is: %d\n" , ch2 , ch2);

    return 0;
}