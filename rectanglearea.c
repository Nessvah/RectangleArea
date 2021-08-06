#include <stdio.h>

int main ()

{
    double width, height, perimeter, area;

    width = 114.5;
    height = 352.3;

    perimeter = (height + width) * 2.0;

    area = width * height;

    printf("The height is %f\n The width is %f\n The perimeter is %f\n", height, width, perimeter);
    printf("The height is %f\n The width is %f\n The area is %f\n", height, width, area);
}

