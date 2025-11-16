#include <stdio.h>

int main() {
    int n, i;
    float numerator = 1, denominator = 1, sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += numerator / denominator;
        numerator += 2;     // Numerator increases by 2
        denominator += 1;   // Denominator increases by 1
    }

    printf("Sum of the series up to %d terms = %.2f\n", n, sum);

    return 0;
}
