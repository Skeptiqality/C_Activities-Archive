/*
    Exercise 1: Looping Constructs
    Program: The Wizard's Multiplication Spell
    Description: Use for loop to generate and print a multiplication table for the given number.
    Author: Skep
    Section: BSCS 1-1N
*/

#include <stdio.h>
#include <windows.h> //for SetConsoleOutputCP()

int main() {
    SetConsoleOutputCP(65001); //for printing emojis, set the output to UTF-8
    int num1 = 0;
//  int numLimit = 0; [var for the numLimit code snippet.]
    int num2;

    printf("Program: The Wizard's Multiplication Spell\n\n");

    printf("Type a number: ");
    scanf("%d", &num1);

    if (num1 == 0) {
        printf("Warning: Value cannot be zero.");
        return 1;
    }

/*
    [This code snippet allows the user to type how many rows of multiplication the program can generate.]
    printf("Type the table limit: ");
    scanf("%d", &numLimit);
*/

//  [Change the "10" to the var "numLimit"]
    for (num2 = 1; num2 <= 10; num2++) {
        printf("✨ %d * %d = %d\n", num1, num2, num1 * num2 );
    }

    return 0;
}