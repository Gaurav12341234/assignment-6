//5. Write a program to calculate sum of cubes of first N natural numbers.
#include<stdio.h>
int main()
{
    int i,n,sum=0,a;
    scanf("%d",&n);
    printf("sum of cubes of first %d natural no.\n",n);
    for(i=1;i<=n;i++)
    {
        a=i*i*i;
        printf("\n%d cube is=%d",i,a);
        sum=sum+a;
    }
    printf("\nsum=%d",sum);
    return 0;
}