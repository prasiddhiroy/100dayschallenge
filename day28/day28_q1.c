#include <stdio.h>
int main()
{
    int i ,j, n, c=0;
    printf("enter the number");
    scanf("%d", &n);
    for(i=2;i<=n;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
            c++;
            }
        }
        if(c==2)
        {
        printf("prime= %d", i);
        }
    }
    printf("\n");
    return 0;
}
