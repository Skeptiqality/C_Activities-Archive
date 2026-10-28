/*
    Program: Circumference of a Circle
    Description: A program that calculates the circumference of a circle
    Author: Skep
    Section: BSCS 1-1N  
*/

#include <stdio.h>
#define pi 3.1416

int main(void){
    float circleRadius = 0;
    float circumference = 0;

    printf("Program: Circumference of a Circle\n\n");

    printf("Input circle radius: ");
    scanf("%f", &circleRadius);

    circumference = 2 * pi * circleRadius;

    printf("\nCircumference: %f \n", circumference);

    printf("Press any key to exit...");
    getchar(); getchar();

    return 0;
}