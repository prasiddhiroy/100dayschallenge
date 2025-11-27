#include <stdio.h>
int main()
{
    int n, i,sum=0;

    printf("enter size of array");
    scanf("%d", &n);
    int arr[n];
    printf("enter element:\n", n);
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
printf("elements are",n);
for (int i=0;i<n;i++)
{
    sum=sum+arr[i];  
}
printf("sum is=%d", sum);
return 0;
}