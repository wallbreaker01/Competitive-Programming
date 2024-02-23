#include<stdio.h>
int main()
{
    long long int t,n,i;
    scanf("%lld",&t);
    while(t--)
    {
    scanf("%lld",&n);
    while(n%2==0)
    {
        n=n/2;
    }
    if(n==1) printf("NO\n");
    else printf("YES\n");
    }
    return 0;
}
