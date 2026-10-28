/*
    Program: Simple Arithmetic Operations
    Description: A program that reads two integers from the user. Compute and display the result of addition, subtraction, multiplicatio, and division.
    Author: Skep
    Section: BSCS 1-1N  
*/

#include <stdio.h>

int main(void) {
    int variable1 = 0;
    int variable2 = 0;
    // int variable3 = 0;

    int sum = 0;
    int difference = 0;
    int product = 0;
    int quotient = 0;

    // int answerrr = 0;

    printf("Program: Simple Arithmetic Operations\n\n");

    printf("Type the first variable: ");
    scanf("%d", &variable1);
    printf("Type the second variable: ");
    scanf("%d", &variable2);
    // printf("Type the third variable: ");
    // scanf("%d", &variable3);

    sum = variable1 + variable2;
    difference = variable1 - variable2;
    product = variable1 * variable2;
    quotient = variable1 / variable2;

    // answerrr = variable1 / variable2 * variable3;

    printf("\nSum (addition): %15d \n", sum);
    printf("Difference (subtraction): %5d \n", difference);
    printf("Product (multiplication): %5d \n", product);
    printf("Quotient (division): %10d \n", quotient);

    // printf("Answerrr (multiple): %10d \n\n", answerrr);

    printf("Press any key to exit...");
    getchar(); getchar();

    return 0;
}