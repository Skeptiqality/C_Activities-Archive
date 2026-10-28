/*
    Activity 1b: if statement
    Program: Number Comparison
    Description: Program that will be able to determine which of the two numbers is smaller.
    Author: Skep
    Section: BSCS 1-1N  
*/

#include <stdio.h>

int main() {
    int number1 = 0;
    int number2 = 0;

    printf("Program: Number Comparison\n\n");

    printf("Please type the first number: ");
    scanf("%d", &number1);
    printf("Please type the second number: ");
    scanf("%d", &number2);

    if (number1 < number2) {
        printf("NUMBER1 IS SMALLER\n\n");
    }

    if (number1 > number2) {
        printf("NUMBER2 IS SMALLER\n\n");
    }

    if (number1 == number2) {
        printf("NUMBER1 AND NUMBER2 ARE EQUAL\n\n");
    }

    printf("Press any key to exit...");
    getchar(); getchar();
    return 0;
}