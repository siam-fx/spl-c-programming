// Write a C program to calculate the area of a circle, setting the value of PI as a constant.

#include <stdio.h>

int main(){
    
    float PI = 3.1416;
    float radius , area;

    printf("Enter the radius of the circle: ");
    scanf("%f" , &radius);

    area = PI * radius * radius;

    printf("Area of the   circle = %f\n" , area);

    return 0;
}