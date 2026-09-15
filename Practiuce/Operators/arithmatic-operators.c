#include <stdio.h>

int main() {
    int x= 10;

    printf("%d\n" , x++); // Post-increment: prints 10, then x becomes 11
    printf("%d\n" , ++x);   // prints 12
    printf("%d\n" , --x);     // prints 11
    printf("%d\n" , ++x); // prints 11, then x becomes 12
    printf("%d\n" , x--); // prints 12, then x becomes 12
    printf("%d\n" , x);     // prints 11

}