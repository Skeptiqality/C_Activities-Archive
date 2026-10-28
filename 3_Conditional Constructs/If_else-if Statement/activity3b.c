/*
    Activity 3b: if...else-if statement
    Program: SFT Messages Charge
    Description: Computes the total charge for text messages exceeding the first 200 messages.
    Author: Skep
    Section: BSCS 1-1N  
*/

#include <stdio.h>

int main() {
    int totalMessageCount = 0;
    int chargedMessages = 0;
    float messageCharge = 0;

    printf("Program: SFT Messages Charge\n\n");

    printf("Please type the corresponding value for each item:\n"
           "Subscriber's total no. of messages: ");
    scanf("%d", &totalMessageCount);

    if (totalMessageCount >= 0 && totalMessageCount <= 200) {
        printf("Charges Incurred: P%.2f \n\n", messageCharge);
    }

    else if (totalMessageCount > 200) {
        chargedMessages = totalMessageCount - 200;
        messageCharge = chargedMessages * 0.5;

        printf("Charges Incurred: P%.2f \n\n", messageCharge);
    }

    else {
        printf("INVALID INPUT, NO CHARGE IS CALCULATED\n\n");
    }

    printf("Press any key to exit...");
    getchar(); getchar();
    return 0;
}