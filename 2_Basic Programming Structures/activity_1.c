/*
    Program: Declaring and Printing Variables
    Description: Declares, assign, and display values for integer, float, double, and character data types
    Author: Skep
    Section: BSCS 1-1N  
*/

#include <stdio.h>

int main(void) {
    int integerValue = 1;
    float floatValue = 1.1234561;
    double doubleValue = 1.1234567890;
    char characterValue = 'a';

    printf("Program: Declaring and Printing Variables\n\n");

    printf("Integer: %d\n", integerValue);
    printf("Float: %f\n", floatValue);
    printf("Double: %.10f\n", doubleValue);
    printf("Character: %c\n\n", characterValue);

    printf("Press any key to exit...");
    getchar();

    return 0;
}