/*
    Activity 3a: if...else-if statement
    Program: Days of the Week
    Description: Tells the corresponding day of the week depending on the input number
    Author: Skep
    Section: BSCS 1-1N  
*/

#include <stdio.h>

int main() {
    int dayOfTheWeek = 0;

    printf("Program: Days of the Week\n\n");

    printf("Input day in numeric form: ");
    scanf("%d", &dayOfTheWeek);

    if (dayOfTheWeek == 1) {
        printf("That day is a Monday.\n"
               "Don't be late!\n\n");
    } 
    
    else if (dayOfTheWeek == 2) {
        printf("That day is a Tuesday.\n"
               "Time to be productive!\n\n");
    } 
    
    else if (dayOfTheWeek == 3) {
        printf("That day is a Wednesday.\n"
               "The peak of weekdays!\n\n");
    } 
    
    else if (dayOfTheWeek == 4) {
        printf("That day is a Thursday.\n"
               "Are you a fan of Thor?\n\n");
    } 
    
    else if (dayOfTheWeek == 5) {
        printf("That day is a Friday.\n"
               "Thank God It's Friday!\n\n");
    } 
    
    else if (dayOfTheWeek == 6) {
        printf("That day is a Saturday.\n"
               "You may have a candy now!\n\n");
    } 
    
    else if (dayOfTheWeek == 7) {
        printf("That day is a Sunday.\n"
               "Sun's Day!\n\n");
    } 
    
    else {
        printf("INVALID INPUT\n\n");
        return 1;
    }

    printf("Press any key to exit...");
    getchar(); getchar();
    return 0;
}