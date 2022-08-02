//9. Write a program to calculate LCM of two numbers.
#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a*b;i++)
    {
        if(i%a==0&&i%b==0)
        {
            printf("LCM of %d and %d is %d",a,b,i);
            break;
        }
    }
    return 0;
}
