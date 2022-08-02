//6. Write a program to calculate factorial of a number.
#include<stdio.h>
int main()
{
    int i,n,a=1;
    scanf("%d",&n);
    printf("Calculate factoral of %d\n",n);
    for(i=0;i<n;i++)
        a=a*(n-i);
    printf("\nFactoral of %d is %d",n,a);
    return 0;
}