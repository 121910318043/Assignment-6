#include<stdio.h>
//program to calculate factorial of a number
int main()
{
    int i=1,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
        i=i*n;
        n--;
    }
    printf("The factorial of given number is %d",i);
    return 0;
}
