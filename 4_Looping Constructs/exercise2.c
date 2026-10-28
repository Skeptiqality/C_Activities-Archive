/*
    Exercise 2: Looping Constructs
    Program: Treasure Hunt – Sum of Numbers
    Description: Calculate and print the sum of numbers from 1 to N (N = user input number).
    Author: Skep
    Section: BSCS 1-1N
*/

#include <stdio.h>

int main() {
    int n = 0; // user input number
    int startNum = 1; // starting int of the equation
    int sum = 0;

    printf("Program: Treasure Hunt - Sum of Numbers\n\n");

    printf("Type a number: ");
    scanf("%d", &n);

//  [Conditions to check if the input is or less than zero and for the "cursed input"]
    if (n == 666) {
        printf("Beware! You've summoned the Ghostly Accountant.\n");
        while (startNum <= n) {
            sum += startNum;
            startNum++;
        }
    }

    else if (n <= 0) {
        printf("Value cannot be negative!");
        return 1;
    }

    else {
        while (startNum <= n) {
            sum += startNum;
            startNum++;
        }
    }

    printf("Total sum: %d", sum);
    
    return 0;
}