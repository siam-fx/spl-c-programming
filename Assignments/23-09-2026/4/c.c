//2 + 4 + 6 + … … … + 98 + 100

#include <stdio.h>

int main(){
    
    int i, sum = 0;
    for (i = 2; i <= 100; i += 2) {
        sum += i;
    }
    printf("Sum: %d\n", sum);

    return 0;
}