/*
    Activity 1: Conditional Constructs – Assessment
    Program: Hospital Patient Triage and Billing System
    Description: A program to classify patients based on their condition, calculate consultation
                 and laboratory fees, apply discounts, and determine the final bill.
    Author: Skep
    Section: BSCS 1-1N  
*/

#include <stdio.h>

int main() {
    char patientName[51];
    int patientAge = 0;
    char patientCategory = 0;
    char patientCondition = 0;
    int patientPriority = 0;
    float consultationFee = 0;
    float laboratoryFee = 0;

    float discountRate = 0;
    float consultationRateIncrease = 0;

    printf("Program: Hospital Patient Triage and Billing System\n\n");

    printf("Please type the corresponding value for each item:\n");
    printf("Patient's Name: ");
    fgets(patientName, sizeof(patientName), stdin);

    printf("Patient's Age: ");
    scanf("%d", &patientAge);
    if (patientAge <= 0) {
        printf("Invalid age input.");
        return 1;
    }

    printf("\nTABLE: Patient Categories and Discount");
    printf("\n%-35s %s",    "Patient Category",                "Discount");
    printf("\n%-40s %s",    "Senior Citizen (S)",                   "20%");
    printf("\n%-40s %s",    "Person with Disability (P)",           "20%");
    printf("\n%-32s %s\n\n",  "Regular (R)",                "No Discount");

    printf("Patient's Category (S/P/R): ");
    scanf(" %c", &patientCategory);

    /*
    if (patientCategory == 'S' || patientCategory == 'P' || patientCategory == 'R') {
        if (patientCategory == 'S' && patientAge >= 60 || patientCategory == 'P') {
            discountRate = 0.20;
        } 
        
        else if (patientCategory == 'S' && patientAge < 60) {
            printf("Incorrect Patient Category: A senior citizen's age must be at least 60 or greater.");
            return 1;
        }
    }
    
    else {
        printf("Invalid Patient Category.");
        return 1;
    }
    */

    switch (patientCategory) {
        case 'S':
            if (patientCategory == 'S' && patientAge >= 60) {
                discountRate = 0.20;
            }
            
            else {
                printf("Incorrect Patient Category: A senior citizen's age must be at least 60 or greater.");
                return 1;
            }
        break;
        case 'P':
            discountRate = 0.20;
        break;
        case 'R':
            discountRate = 0;
        break;
        default:
            printf("Invalid Patient Category.");
            return 1;
    }

    printf("\nTABLE: Patient Condition and Priority");
    printf("\n%-40s %s",      "Patient Condition",                                "Priority");
    printf("\n%-40s %s",      "Emergency (E)",                          "Immediate Priority");
    printf("\n%-40s %s",      "Non-emergency (N), age 60 and above",        "Priority Queue");
    printf("\n%-40s %s\n\n",  "Non-emergency (N), age below 60",             "Regular Queue");

    printf("Condition (E/N): ");
    scanf(" %c", &patientCondition);
    if (patientCondition == 'E' || patientCondition == 'N') {
        if (patientCondition == 'E') {
            patientPriority = 1;
            consultationRateIncrease = 0.20;
        }
        
        else if (patientCondition == 'N') {
            if (patientAge >= 60) {
                patientPriority = 2;
            }
            
            else if (patientAge >= 0 && patientAge < 60) {
                patientPriority = 3;
            }
        }
        
        else {
            printf("Invalid Patient Condition.");
            return 1;
        }
    }

    printf("Consultation Fee: PHP ");
    scanf(" %f", &consultationFee);
    if (consultationFee < 0) {
        printf("Consultation Fee cannot be negative.");
        return 1;
    }

    printf("Laboratory Fee: PHP ");
    scanf(" %f", &laboratoryFee);
        if (laboratoryFee < 0) {
        printf("Laboratory Fee cannot be negative.");
        return 1;
    }

    float emergencySurcharge = consultationFee * consultationRateIncrease;
    float adjustedConsultationFee = consultationFee + emergencySurcharge;
    float subtotal = adjustedConsultationFee + laboratoryFee;
    float discount = subtotal * discountRate;
    float finalBill = subtotal - discount;


    if (patientPriority == 1) {
        printf("\nPatient Priority: Immediate Priority\n");
    }
    
    else if (patientPriority == 2){
        printf("\nPatient Priority: Priority Queue\n");
    }
    
    else {
        printf("\nPatient Priority: Regular Queue\n");
    }

    printf("Original Consultation Fee: PHP %.2f\n", consultationFee);

    if (patientCondition == 'E') {
        printf("Emergency Surcharge: PHP %.2f\n", emergencySurcharge);
        printf("Adjusted Consultation Fee: PHP %.2f\n", adjustedConsultationFee);
    }
    printf("Laboratory Fee: PHP %.2f\n", laboratoryFee);
    printf("Subtotal: PHP %.2f\n", subtotal);

    if (discount > 0) {
        printf("Discount (20%%): PHP %.2f\n", discount);
    }
    printf("Final Bill: PHP %.2f\n\n", finalBill);

    return 0;
}