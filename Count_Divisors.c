#include<stdio.h>
int main()
{
    int i,r,k,a,c=0;
    scanf("%d%d%d",&i,&r,&k);
    for(a=i;a<=r;a++)
    {
        if(a%k==0)
        {
            c++;
        }
    }
    printf("%d",c);
}