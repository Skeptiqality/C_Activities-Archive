/*
    Activity 2b: if...else statement
    Program: Uppercase or Lowercase Letter
    Description: Determines whether the input letter is uppercase or lowercase
    Author: Skep
    Section: BSCS 1-1N  
*/

#include <stdio.h>

int main() {
    char letter = 0;

    printf("Program: Uppercase or Lowercase Letter\n\n");

    printf("Please type a letter: ");
    scanf("%c", &letter);

    //characters have their ASCII value equvalents
    if (letter >= 'a' && letter <= 'z') {
        printf("LOWER CASE\n");
    }

    else {
        printf("UPPER CASE\n");
    }

    printf("Press any key to exit...");
    getchar(); getchar();
    return 0;
}