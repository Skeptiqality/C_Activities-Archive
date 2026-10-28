/*
    C Programming Adventure: Mission 4, Task 1
    Program: Declare and Initialize
    Description: Declare and initialize an integer (your) age, float salary (your weekly allowance), and a char grade (fist letter of your surname).
    Author: Skep
    Section: BSCS 1-1N  
*/

#include <stdio.h>

int main(void){
    int myAge = 18;
    float my_weeklyAllowance = 1000.00;
    char myGrade = 'S';

    printf("Program: Declare and Initialize\n\n");

    printf("My Age: %d \n", myAge);
    printf("My Salary: %f \n", my_weeklyAllowance);
    printf("My Grade: %c \n\n", myGrade);

    printf("Press any key to exit...");
    getchar();

    return 0;
}