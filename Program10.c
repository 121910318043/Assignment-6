#include<stdio.h>
//program to reverse a given number
int main()
{
    int a=0,b,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        a=(a+n%10)*10;
        n=n/10;
    }
    printf("%d",a/10);
    return 0;
}
