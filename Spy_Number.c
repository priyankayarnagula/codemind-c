#include<stdio.h>
int main()
{
    int n,d,sum=0,p=1;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        sum+=d;
        p*=d;
        n=n/10;
    }
    if(sum==p)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}