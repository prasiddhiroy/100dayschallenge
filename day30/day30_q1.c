#include <stdio.h>
int main()
{
    int n, i,even=0,odd=0;

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
    if(i%2==0)
    even++;
    else
    odd++;
}
printf("evem is=%d", even);
printf("odd is=%d", odd);
return 0;
}