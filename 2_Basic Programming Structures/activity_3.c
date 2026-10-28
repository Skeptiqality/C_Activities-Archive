/*
    Program: Addition of Two Integers
    Description: A program that reads two integers from the user, stores them in variables, and prints their sum.
    Author: Skep
    Section: BSCS 1-1N  
*/

#include <stdio.h>

int main(void) {
    int addends1 = 0;
    int addends2 = 0;
    int additionSum = 0;

    printf("Program: Addition of Two Integers\n\n");

    printf("Type first addend: ");
    scanf("%d", &addends1);
    printf("Type second addend: ");
    scanf("%d", &addends2);
    additionSum = addends1 + addends2;

    printf("\nSum: %d \n\n", additionSum);

    printf("Press any key to exit...");
    getchar(); getchar();

    return 0;
}