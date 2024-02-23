#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,s;
        scanf("%lld%lld",&n,&s);
        printf("%lld\n",s/(n*n));
    }
    return 0;
}

