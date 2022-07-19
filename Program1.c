#include<stdio.h>
//program to calculate sum of first N natural numbers
int main()
{
    int s=0,n;
    printf("Enter a number ");
    scanf("%d",&n);
    while(n>0)
    {
        s=s+n;
        n--;
    }
    printf("%d",s);
    return 0;
}
