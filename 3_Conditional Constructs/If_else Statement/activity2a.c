/*
    Activity 2a: if...else statement
    Program: Days of the Week | Weekdays or Weekends
    Description: Determines whether the input number that corresponds to the days of the week is weekday or weekend.
    Author: Skep
    Section: BSCS 1-1N  
*/

#include <stdio.h>

int main() {
    int dayOfTheWeek = 0;

    printf("Program: Days of the Week | Weekdays or Weekends\n\n");

    printf("Please type a number that corresponds to a day of the week: ");
    scanf("%d", &dayOfTheWeek);

    if (dayOfTheWeek >= 1 && dayOfTheWeek <= 5) {
        printf("WEEKDAY\n");
    }

    else {
        printf("WEEKEND\n");
    }

    printf("Press any key to exit...");
    getchar(); getchar();

    return 0;
}