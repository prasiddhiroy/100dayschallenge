#include <stdio.h>
int main()
{
    float celcius,fahrenheit;
    printf("enter the celcius:\n");
    scanf("%f", &celcius);
    fahrenheit = (celcius * 9.0 / 5.0) + 32;
    printf("celcius = %f fahrenheit\n", fahrenheit);
    return 0;
}
