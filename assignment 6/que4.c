//4. Write a program to calculate sum of squares of first N natural numbers.
#include<stdio.h>
int main()
{
    int i,n,sum=0,a;
    scanf("%d",&n);
    printf("Sum of squares of first %d natural no.\n",n);
    for(i=1;i<=n;i++)
    {
        a=i*i;
        printf("\n%d square is=%d",i,a);
        sum=sum+a;
    }
    printf("\nsum=%d",sum);
    return 0;
}