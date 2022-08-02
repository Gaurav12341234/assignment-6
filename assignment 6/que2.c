//2. Write a program to calculate sum of first N even natural numbers.
#include<stdio.h>
int main()
{
   int i,n,sum=0;
   scanf("%d",&n);
   printf("Sum of first %d even natural no.\n",n);
   for(i=2;i<=2*n;i=i+2)
   {
        printf(" %d",i);
        sum=sum+i;
   }   
   printf("\nSum=%d",sum);
   return 0;
}
