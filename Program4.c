#include<stdio.h>
//program to calculate sum of squares of first N natural numbers
int main()
{
    int n,s=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
        s=s+(n*n);
        n--;
    }
    printf("%d",s);
    return 0;
}
