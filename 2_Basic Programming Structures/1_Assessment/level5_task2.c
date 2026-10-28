/*
    Program: Salary Computation
    Description: A program that computes the salary of a part-time worker
    Author: Skep
    Section: BSCS 1-1N  
*/

#include <stdio.h>

int main(void){
    printf("Program: Salary Computation\n\n");

    float hourlyRate = 0;
    int hoursWorked = 0;
    float totalSalary = 0;

    printf("Please type your hourly rate: P");
    scanf("%f", &hourlyRate);
    printf("Please type your total hours worked: ");
    scanf("%d", &hoursWorked);

    totalSalary = hourlyRate * hoursWorked;

    printf("\nYour total salary is: P%.2f \n", totalSalary);

    printf("\nPress any key to exit...");
    getchar(); getchar();

    return 0;
}