/*Write a C program to determine the grade based on marks using the following table:
Marks (M) Grade
80 – 100 A+
70 – 79 A
60 – 69 A
50 – 59 B
40 –49 C
33 – 39 D
0 – 32 F
Ensure that if the user enters a value outside the range 0-100, the program provides an
appropriate error message.*/

#include <stdio.h>

int main(){
    
    int marks;
    printf("Enter your marks: ");
    scanf("%d" , &marks);

    if(marks >= 80){
        printf("Your grade is A+\n");
    }
    else if(marks >= 70){
        printf("Your grade is A\n");
    }
    else if(marks >= 60){
        printf("Your grade is A\n");
    }
    else if(marks >= 50){
        printf("Your grade is B\n");
    }
    else if(marks >= 40){
        printf("Your grade is C\n");
    }
    else if(marks >= 33){
        printf("Your grade is D\n");
    }
    else if(marks >= 0){
        printf("Your grade is F\n");
    }
    else{
        printf("Error: Invalid marks entered. Please enter a value between 0 and 100.\n");
    }

    return 0;
}