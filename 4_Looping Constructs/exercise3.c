/*
    Exercise 3: Looping Constructs
    Program: The Pyramid Builder Challenge
    Description: Generate an asterisk pyramid based where the number of levels is based on user input.
    Author: Skep
    Section: BSCS 1-1N
*/

#include <stdio.h>

int main() {
    int pyramidLevels = 0;
    int row; // var for row looping
    int tchar; // var for char loop (asterisks and whitepsaces)

    printf("Program: The Pyramid Builder Challenge\n\n");

    printf("Build a Pyramid for the King!\n"
            "How many levels should it have? ");
    scanf("%d", &pyramidLevels);

    if (pyramidLevels >= 10) {
        printf("The King is impressed by your ambition!\n\n");
    }

    else if (pyramidLevels <= 3) {
        printf("The King sighs. 'Too small for my glory!'\n\n");
    }

    // for row looping
    for (row = 1; row <= pyramidLevels; row++) {
        // whitespaces equation to keep the asterisks in center
        // nth value keep the pyramid centered, while the -1 forms the pyramid itself (closing in to the left)
        for (tchar = 1; tchar <= 2 * pyramidLevels - row; tchar++) {
            printf(" ");
        }

        // prints the actual asterisks
        for (tchar = 1; tchar <= 2 * row - 1; tchar++) {
            printf("*");
        }
        printf("\n"); // allows the asterisks to be printed in the next line
    }

    printf("\nLevel 1 completed! The King nods in approval.");

    return 0;
}