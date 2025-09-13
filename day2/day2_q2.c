#include <stdio.h>
int main()
{
    float r, circum, area;
    printf("enter the radius");
    scanf("%f", &r);
    circum = 2 * 3.14 * r;
    area= 3.14 * r * r;
    printf("circum is : %f\n", circum);
    printf("area is : %f", area);
    return 0;
}