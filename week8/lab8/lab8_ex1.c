#include <stdio.h>

double calculate_base_area(double length, double width) {
    return length * width;
}

double calculate_base_perimeter(double length, double width) {
    return 2 * (length + width);
}

double calculate_volume(double length, double width, double height) {
    return length * width * height;
}

int main(void) {
    double length, width, height;

    while (1) {
        printf("Enter length, width, and height in cm: ");
        if (scanf("%lf %lf %lf", &length, &width, &height) != 3) return 1;

        if (length <= 0 || width <= 0 || height <= 0) {
            printf("Error: All dimensions must be greater than 0.\n");
        } else {
            break;
        }
    }

    printf("Base Area: %.2f\n", calculate_base_area(length, width));
    printf("Perimeter: %.2f\n", calculate_base_perimeter(length, width));
    printf("Volume: %.2f\n", calculate_volume(length, width, height));

    return 0;
}