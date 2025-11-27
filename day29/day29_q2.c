#include <stdio.h>
int main()
{
    int n, i, max, min;

    printf("enter size of array");
    scanf("%d", &n);
    int arr[n];
    printf("enter element:\n", n);
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
     min = arr[0];
     max = arr[0];
printf("elements are",n);
for (int i=0;i<n;i++)
{
     if (arr[i] < min)
     min = arr[i];
     if(arr[i] > max)
     max = arr[i];
}
printf("max is=%d", max);
    printf("min is=%d", min);
return 0;
}