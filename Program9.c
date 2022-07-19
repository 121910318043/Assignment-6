#include<stdio.h>
//Write a program to calculate LCM of two numbers
int main()
{
    int a,b,i=1,s;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        while(1)
        {
            if(a%b==0)
        {
            s=a;
            break;
        }
           a=a*i;
           i++;
        }
     printf("%d",s);
    }
    else
    {
        while(1)
        {
            if(b%a==0)
        {
            s=b;
            break;
        }
           b=b*i;
           i++;
        }
     printf("%d",s);
    }
    return 0;
}
