#include<stdio.h>
int main()
{
    long long n,k;
    scanf("%lld%lld",&n,&k);
    n%2==0?((k<=n/2)?printf("%lld\n",2*k-1):printf("%lld\n",2*(k-n/2))):((k<=(n/2)+1)?printf("%lld\n",2*k-1):printf("%lld\n",2*(k-(n/2)-1)));
    return 0;
}
