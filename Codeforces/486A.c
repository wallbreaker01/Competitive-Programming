#include<stdio.h>

int main()
{
    long long int n, d;
    while(scanf("%lld",&n)==1)
    if(n%2 == 0)
    {
        d=n/2;
        printf("%lld\n",d);
    }
    else
    {
        d = (-(n+1))/2;
        printf("%lld\n",d);
    }
    return 0;
}
