
#include <stdio.h>
#include <math.h>  // for pow() function

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest;

    // Input values
    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of interest: ");
    scanf("%f", &rate);

    printf("Enter Time: ");
    scanf("%f", &time);

    // Simple Interest formula
    simpleInterest = (principal * rate * time) / 100;

    // Compound Interest formula
    compoundInterest = principal * pow((1 + rate / 100), time) - principal;

    // Display results
    printf("\nSimple Interest = %f\n", simpleInterest);
    printf("Compound Interest = %f\n", compoundInterest);

    return 0;
}