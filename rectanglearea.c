#include <stdio.h>

int main ()

{
    //Creating the variables
    double width, height, perimeter, area;

    width = 74.12;
    height = 35.53;

    //Formula for perimeter
    perimeter = (height + width) * 2.0;

    //Formula for area
    area = width * height;

    //Output with only two decimals values
    printf("The height is %.2f \n The width is %.2f\n The perimeter is %.2f\n", height, width, perimeter);
    printf("The height is %.2f\n The width is %.2f\n The area is %.2f\n", height, width, area);
}

