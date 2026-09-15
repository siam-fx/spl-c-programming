//  Write a C program to demonstrate the use of assignment and compound assignment operators. 

#include <stdio.h>

int main(){
    
    int x = 10;

    printf("%d\n" , x);
    printf("%d\n" , x+= 5);
    printf("%d\n" , x-= 2);
    printf("%d\n" , x*= 3);
    printf("%d\n" , x/= 4);
    printf("%d\n" , x%= 2);

    return 0;
}