/*
    Program: User Input with scanf
    Description: Program that asks the user to input their age, height (in meters), and first initial; displayed back using printf
    Author: Skep
    Section: BSCS 1-1N  
*/

#include <stdio.h> 

int main(void) {
    int age = 0;
    float height = 0;
    char firstInitial = 0;

    printf("Program: User Input with scanf\n\n");

    printf("Type your age: ");
    scanf("%d", &age);
    printf("Type your height (in meters): ");
    scanf("%f", &height);
    printf("Type your first initial: ");
    scanf(" %c", &firstInitial);

    printf("\nAge: %d \n", age);
    printf("Height (in meters): %.2f \n", height);
    printf("Middle Inital: %c \n\n", firstInitial);

    printf("Press any key to exit...");
    getchar(); getchar();

    return 0;
}