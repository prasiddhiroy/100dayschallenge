#include <stdio.h>
int main()
{
    int a, b, sum = 0, diff = 0, pro = 1;
    printf("enter two numbers:");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("sum = %d\n" , sum);
        diff = a - b;
        printf("diff = %d\n" , diff);
        pro = a * b;
        printf("pro = %d\n" , pro);
        if (b!=0)
{
        printf("quotient = %d\n", a / b);
}
else
{
        printf("division by zero is not allowed");
}
return 0;
}