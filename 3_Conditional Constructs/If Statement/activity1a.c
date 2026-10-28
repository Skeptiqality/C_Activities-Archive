/*
    Activity 1a: if statement
    Program: Double Precision Floating Point | Positive or Negative
    Description: Program that determines whether the floating-point input by the user is positive or negative.
    Author: Skep
    Section: BSCS 1-1N
*/

#include <stdio.h>

int main() {
    // double precision means using the data type "double" instead of "float"
    double floatingPointNum = 0;

    printf("Program: Double Precision Floating Point | Positive or Negative\n\n");

    printf("Please type a double precision floating point value: ");
    scanf("%lf", &floatingPointNum);

    if (floatingPointNum > 0) {
        printf("POSITIVE\n\n");
    }

    if (floatingPointNum < 0) {
        printf("NEGATIVE\n\n");
    }

    printf("Press any key to exit...");
    getchar(); getchar();
    return 0;
}