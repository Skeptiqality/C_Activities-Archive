/*
    Program: Area of a Rectangle
    Description: A program that asks the user for length and width values to compute the area of a rectangle.
    Author: Skep
    Section: BSCS 1-1N  
*/

#include <stdio.h>

int main(void) {
    float lenghtValue = 0;
    float widthValue = 0;
    float areaRectangle = 0;

    printf("Program: Area of a Rectangle \n\n");

    printf("Enter lenght value: ");
    scanf("%f", &lenghtValue);
    printf("Enter width value: ");
    scanf("%f", &widthValue);

    areaRectangle = lenghtValue * widthValue;

    printf("\nArea: %f \n\n", areaRectangle);

    printf("Press any key to exit...");
    getchar(); getchar();

    return 0;
}