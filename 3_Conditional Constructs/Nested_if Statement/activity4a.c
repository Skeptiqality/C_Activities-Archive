/*
    Activity 4a: Nested if statement
    Program: TNP Telephone Company
    Description: Computes the bill produced depending on when the call was made.
    Author: Skep
    Section: BSCS 1-1N  
*/

#include <stdio.h>

int main() {
    /*
        Conditions:
        Calls made on a weekday between 6:00 AM to 6:00 PM are charged at 2.50 pesos per minute. 
        Charges made at other times during a weekday are charged a discounted rate of 2.00 pesos per minute.
        Calls made anytime on a weekend are charged a weekend rate of 1.50 pesos per minute.
    */

    int dayOfTheWeek = 0;
    // time represented using the 24-hour clock:
    int hour = 0;          // value: 0-23
    int minute = 0;        // value: 00-59
    int callDuration = 0;  // in minutes, rounded up to the next minute
    float callBill = 0;

    printf("Program: TNP Telephone Company \n\n");

    printf("Please type the corresponding value for each item:\n\n");

    printf("Each number from 1 to 7 corresponds to the days of the week.\n"
           "1 = Monday\n"
           "2 = Tuesday\n"
           "3 = Wednesday\n"
           "4 = Thursday\n"
           "5 = Friday\n"
           "6 = Saturday\n"
           "7 = Sunday\n\n");
    printf("On what day was the call made?: ");
    scanf("%d", &dayOfTheWeek);
    if (dayOfTheWeek < 1 || dayOfTheWeek > 7) {
        printf("INVALID INPUT");
        return 1;
    }

    printf("\nWhat time was the call made?: \n");
    printf("Hour (0-23): ");
    scanf("%d", &hour);
    if (hour < 0 || hour > 23) {
        printf("INVALID INPUT");
        return 1;
    }

    printf("Minute (0-59): ");
    scanf("%d", &minute);
    if (minute < 0 || minute > 59) {
        printf("INVALID INPUT");
        return 1;
    }

    printf("\nHow long was the call (minutes)? Round up the duration to the next minute: ");
    scanf("%d", &callDuration);
    if (callDuration < 1) {
        printf("INVALID INPUT");
        return 1; 
    }
    
    // The if conditionals after the scanf is to ensure that the user is typing a valid value.
    // ex.: there can't be a value of "24" in the variable of hour in an 24-hour clock, so it will be rejected and returned with a value of 1 (error).

    if (dayOfTheWeek >= 1 && dayOfTheWeek <= 5) {
        if (hour >= 6 && hour < 18) {
            callBill = callDuration * 2.50;

            printf("\nTime of call: %.2d:%.2d\n", hour, minute);
            printf("Call duration: %d minutes\n", callDuration);
            printf("TOTAL BILL: P%.2f", callBill);
        } 

        else {
            callBill = callDuration * 2;

            printf("\nTime of call: %.2d:%.2d\n", hour, minute);
            printf("Call duration: %d minutes\n", callDuration);
            printf("TOTAL BILL: P%.2f", callBill);
        }
    }

    else {
        callBill = callDuration * 1.5;

        printf("\nTime of call: %.2d:%.2d\n", hour, minute);
        printf("Call duration: %d minutes\n", callDuration);
        printf("TOTAL BILL: P%.2f", callBill);
    }

    printf("\n\nPress any key to exit...");
    getchar(); getchar();
    return 0;
}