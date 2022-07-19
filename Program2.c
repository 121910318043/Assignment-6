#include<stdio.h>
//program to calculate sum of first N even natural numbers
int main()
{
    int n,s=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
        s=s+n*2;
        n--;
    }
    printf("%d",s);
    return 0;
}
