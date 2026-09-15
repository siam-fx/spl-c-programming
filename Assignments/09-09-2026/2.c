// Design a C program to find the memory size of common data types in C.

#include <stdio.h>

int main(){

    // sizeof() হলো C-এর একটি operator, যা কোনো data type বা variable মেমোরিতে কত byte জায়গা নেয়, তা বের করে।
    // sizeof()-এর result-এর জন্য %zu ব্যবহার করা হয়, কারণ sizeof() একটি size_t type-এর value return করে।

    printf("Size of int: %zu byte(s)\n" , sizeof(char));
    printf("Size of float: %zu byte(s)\n" , sizeof(float));
    printf("Size oof double: %zu byte(s)\n" , sizeof(double));
    printf("Size of char: %zu byte(s)\n") , sizeof(char);

    return 0;
}