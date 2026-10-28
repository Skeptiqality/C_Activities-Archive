/*
    Activity 4a: Switch case statement
    Program: Company Bonus
    Description: A program that display the corresponding bonus depending on the number of years and salary inputted.
    Author: Skep
    Section: BSCS 1-1N  
*/

#include <stdio.h>

int main() {
    int years = 0;
    float salary = 0;
    float bonus = 0;

    printf("Program: Company Bonus\n\n");

    printf("Please type the corresponding value for each item:\n");

    printf("Years working in company: ");
    scanf("%d", &years);
    if (years < 0) {
        printf("INVALID INPUT");
        return 1;
    }

    printf("Please type your salary: P");
    scanf("%f", &salary);
    if (salary <= 0) {
        printf("INVALID INPUT");
        return 1;
    }

    // The if conditionals after the scanf is to ensure that the user is typing a valid value.
    // ex.: a negative value in number of years in service is not possible.

    switch (years) {
        case 0: case 1: case 2: case 3: case 4: case 5:
            bonus = salary * 0.20;
            printf("Bonus: %.2f", bonus);
        break;
        
        case 6: case 7: case 8: case 9: case 10:
            bonus = salary * 0.25;
            printf("Bonus: %.2f", bonus);
        break;

        case 11: case 12: case 13: case 14: case 15:
            bonus = salary * 0.30;
            printf("Bonus: %.2f", bonus);
        break;

        case 16: case 17: case 18: case 19: case 20:
            bonus = salary * 0.35;
            printf("Bonus: %.2f", bonus);
        break;

        default:
            if (years > 20) {
                bonus = salary * 0.50;
                printf("Bonus: %.2f", bonus);
            }

            else {
                printf("Something went wrong with the computation.");
                return 1;
            }
    }

    printf("\n\nPress any key to exit...");
    getchar(); getchar();
    return 0;
}