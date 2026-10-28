/*
    Program: Net Income
    Description: A program that computes the net income based on inputs
    Author: Skep
    Section: BSCS 1-1N  
*/

#include <stdio.h>
#include <locale.h>

int main(void){
    float grossIncome = 0;
    float incomeTax = 0;
    float sss_contribution = 0;
    float medicalInsurance = 0;
    float netIncome = 0;

    printf("Program: Net Income\n\n");

    printf("Please type your Gross Income: P");
    scanf("%f", &grossIncome);
    printf("Please type your Income Tax: P");
    scanf("%f", &incomeTax);
    printf("Please type your SSS Contribution: P");
    scanf("%f", &sss_contribution);
    printf("Please type your Medical Insurance: P");
    scanf("%f", &medicalInsurance);

    netIncome = grossIncome - (incomeTax + sss_contribution + medicalInsurance);

    printf("\nYour Net Income is: P%.2f \n", netIncome);

    printf("\nPress any key to exit...");
    getchar();getchar();

    return 0;
}