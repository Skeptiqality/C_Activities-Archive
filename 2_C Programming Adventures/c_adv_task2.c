/*
    C Programming Adventure: Mission 4, Task 2
    Program: Input and Output
    Description: Input and output (your) full name in the console.
    Author: Skep
    Section: BSCS 1-1N  
*/

#include <stdio.h>

int main(void){
   char fullName[51]; 
    
    printf("Program: Input and Output\n\n");

    printf("Enter your full name: ");
    fgets(fullName, sizeof(fullName), stdin);

    printf("\nYour full name is: %s \n", fullName);

    printf("Press any key to exit...");
    getchar();

    return 0;
}