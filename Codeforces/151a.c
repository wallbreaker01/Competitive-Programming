#include <stdio.h>
int main()
{
    int n,k,l,c,d,p,nl,np,salt,drink,lime;
    scanf("%d%d%d%d%d%d%d%d",&n,&k,&l,&c,&d,&p,&nl,&np);
    drink=(k*l)/(n*nl);
    lime=(c*d)/n;
    salt=p/(n*np);
    if(drink<=lime && drink<=salt) printf("%d",drink);
    else if(lime<=drink && lime<=salt) printf("%d",lime);
    else if(salt<=drink && salt<=lime) printf("%d",salt);
    return 0;

}
