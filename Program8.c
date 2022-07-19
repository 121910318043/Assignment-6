#include<stdio.h>
//Write a program to check whether a given number is a Prime number or not
int main()
{
    int count=0,n,i=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        if(n%i==0)
           count++;
        i++;
    }
    if(count==2)
        printf("%d is a Prime number",n);
    else
        printf("%d is not a Prime number",n);
    return 0;
}
