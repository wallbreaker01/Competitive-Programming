#include<stdio.h>
int main()
{
    long long int i,n,x=0,y=0,count=0;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        x=x+i; //14
        y=y+x; //34
        if(y<=n) count=i; //5 exceed
    }
    printf("%lld\n",count);

return 0;
}

