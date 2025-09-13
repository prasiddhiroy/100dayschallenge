#include <stdio.h>
int main()
{
    float len,bre,peri,area;
     printf("enter the length");
     scanf("%f", &len);
     printf("enter the breadth");
     scanf("%f", &bre);
     area = len * bre;
     peri = 2 * (len + bre);
     printf("area is = %f\n", area);
     printf("perimeter is = %f", peri);
     return 0;
}