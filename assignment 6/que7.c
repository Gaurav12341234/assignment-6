//7. Write a program to count digits in a given number.
#include<stdio.h>
int main()
{
    int a, count=0;
    printf("Enter a number:");
    scanf("%d",&a);
    while(a)
    {
        count++;
        a/=10;
    }
    printf("digits in a no. is %d",count);
    return 0;
}