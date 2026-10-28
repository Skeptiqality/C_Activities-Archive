/*
    Activity 2: Conditional Constructs – Assessment
    Program: Employee Salary, Overtime, and Tax Calculator
    Description: The program calculates an employee's gross salary, overtime pay, deductions,
                 and net salary based on hours worked, hourly rate, and employment category.
    Author: Skep
    Section: BSCS 1-1N  
*/

#include <stdio.h>

int main() {
    char employeeName[51];
    char employeeCategory = 0;
    int workingHours = 0;
    float hourlyRate = 0;
    float overtimeRate = 0;
    float insurance = 0;
    int overtime = 0;

    printf("Program: Employee Salary, Overtime, and Tax Calculator\n\n");

    printf("Please type the corresponding value for each item:\n");
    printf("Employee Name: ");
    fgets(employeeName, sizeof(employeeName), stdin);

    printf("\nTABLE: Employee Type and Overtime Rate");
    printf("\n%-25s %s",    "Employee Type",      "Overtime Rate");
    printf("\n%-25s %s",    "Regular (R)",                  "1.5");
    printf("\n%-25s %s\n",  "Contractual (C)",             "1.25");

    printf("\nEmployment Category (R/C): ");
    scanf("%c", &employeeCategory);

    switch (employeeCategory) {
        case 'R':
            overtimeRate = 1.5;
            insurance = 250;
        break;
        case 'C':
            overtimeRate = 1.25;
        break;
        default:
            printf("Invalid Employee Type");
            return 1;
    }

    printf("Hours Worked: ");
    scanf("%d", &workingHours);
    if (workingHours <= 0 || workingHours >= 80) {
        printf("Invalid working hours input.");
        return 1;
    }
    
    else if (workingHours > 40) {
        overtime = workingHours - 40;
    }

    printf("Hourly Rate: PHP ");
    scanf("%f", &hourlyRate);
    if (hourlyRate <= 0) {
        printf("Invalid hourly rate input.");
        return 1;
    }

    float basicPay = (workingHours - overtime) * hourlyRate;
    float overtimePay = (hourlyRate * overtimeRate) * overtime;
    float grossSalary = basicPay + overtimePay;
    float tax = 0;
    int taxPercentage = 0;

    if (grossSalary >= 15000) {
        taxPercentage = 15;
        tax = grossSalary * 0.15;
    }
    
    else if (grossSalary >= 8000 && grossSalary < 15000) {
        taxPercentage = 10;
        tax = grossSalary * 0.10;
    }
    
    else {
        taxPercentage = 5;
        tax = grossSalary * 0.05;
    }

    float netSalary = grossSalary - tax - insurance;

    printf("\nEmployee Name: %s", employeeName);
    printf("Basic Pay: PHP %.2f", basicPay);

    if (overtime > 0) {
        printf("\nOvertime Pay: PHP %.2f", overtimePay);
    }
    printf("\nGross Salary: PHP %.2f", grossSalary);
    printf("\nTax (%d%%): PHP %.2f", taxPercentage, tax);
    
    if (employeeCategory == 'R') {
        printf("\nInsurance: PHP %.2f", insurance);
    }
    printf("\nNet Salary: PHP %.2f\n\n", netSalary);

    return 0;
}