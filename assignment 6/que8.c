//8. Write a program to check whether a given number is a Prime number or not.
#include<stdio.h>
int main()
{
    int a,i,flag=0;
    printf("Enter a number:");
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("Not Prinme no.");
    else    
        printf("Prime no.");
    return 0;
}