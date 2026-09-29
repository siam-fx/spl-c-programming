//1 + 3 + 5 + … … … + 97 + 99

#include <stdio.h>

int main(){
    
    int i, sum = 0;
    for (i = 1; i <= 100; i += 2) { 
        sum += i;
    } 

    printf("Sum: %d\n", sum);

    return 0;
}