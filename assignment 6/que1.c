//1. Write a program to calculate sum of first N natural numbers.
#include<stdio.h>
int main()
{
    int i,sum=0,n;
    scanf("%d",&n);
    printf("sum of first %d natural no.\n",n);
    for(i=1;i<=n;i++)
    {
        printf(" %d",i);
        sum=sum+i;
    }
    printf("\nsum=%d",sum);
    return 0;
}
