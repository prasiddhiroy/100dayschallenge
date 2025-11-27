#include <stdio.h>
int main()
{
    int n,i,pos=0,neg=0,ze=0;

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
    if(i==0)
    ze++;
    else if(i>0)
    pos++;
    else if(i<0)
    neg++;
}
printf("pos is=%d", pos);
printf("neg is=%d",neg);
printf("zero is =%d", ze);
return 0;
}