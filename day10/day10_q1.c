#include <stdio.h>
int main() 
{
    float a, b, c;

    // Input sides
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check if a valid triangle
    if (a + b > c && a + c > b && b + c > a) {
        // Classify triangle
        if (a == b && b == c) {
            printf("The triangle is Equilateral.\n");
        }
        else if (a == b || b == c || a == c) {
            printf("The triangle is Isosceles.\n");
        }
        else {
            printf("The triangle is Scalene.\n");
        }
    } else {
        printf("Invalid triangle! The sum of any two sides must be greater than the third side.\n");
    }

    return 0;
}