//1*2*3*4*5 or 5!

#include <stdio.h>

int main(){
    
    int i, fact = 1;
    for (i = 1; i <= 5; i++) {
        fact *= i;
    }
    printf("Factorial: %d\n", fact);

    return 0;
}