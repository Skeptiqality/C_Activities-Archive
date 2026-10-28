/*
    Program: Sum of Given Integers
    Description: A program that computes the sum of all given integers (1, 3, 5, 7, 8, 9)
    Author: Skep
    Section: BSCS 1-1N  
*/

#include <stdio.h>

int main(void){
    int integersSum = 1 + 3 + 5 + 7 + 8 + 9;

    printf("Program: Sum of Given Integers\n\n");

    printf("Integers: 1, 3, 5, 7, 8, 9 \n");
    printf("Sum: %d \n", integersSum);

    printf("Press any key to exit...");
    getchar();

    return 0;
}