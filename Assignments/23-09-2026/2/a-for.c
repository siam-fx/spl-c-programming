//Develop C programs to display the following series using for, while, and do while loops:
//1, 2, 3, 4, … … … 99, 100

#include <stdio.h>

int main(){
    
    int i;
    for (i = 1; i <= 100; i++) {
        printf("%d\t" , i);
    }

    return 0;
}