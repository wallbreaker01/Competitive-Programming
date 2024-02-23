#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,i,count=0;
        scanf("%lld",&n);
        long long int s=sqrt(n);
        for(i=2;i*i<=s;i++)
        {
            if(n%i==0) break;
        }
        if(i*i>s && s*s==n && n>1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
