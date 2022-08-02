//3. Write a program to calculate sum of first N odd natural numbers.
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    printf("Sum of first %d odd natural no.\n",n);
    for(i=1;i<=(2*n)-1;i+=2)
    {
        printf(" %d",i);
        sum=sum+i;
    }
    printf("\nSum=%d",sum);
    return 0;
}