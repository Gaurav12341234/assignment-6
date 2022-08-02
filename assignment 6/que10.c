//10. Write a program to reverse a given number.
#include<stdio.h>
int main()
{
    int a,rem,rev=0;
    printf("Enter a Number:");
    scanf("%d",&a);
    while(a)
    {
        rem=a%10;
        a=a/10;
        rev=rev*10+rem;
    }
    printf("reverse number is %d",rev);
    return 0;
}