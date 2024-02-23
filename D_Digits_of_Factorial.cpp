#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define babusuna main
#define to_sowmik_roy 0;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const ll N=1e6+10;
/* Vogoban please code ta accept korai dew >.< */

int babusuna()
{
    double s[N];
    s[0]=0;
    for (ll i = 1 ; i <= N ; i++) 
    {
        s[i]=s[i-1]+log(i);
    }
    ll t;
    cin >> t;
    for (ll p = 1 ; p <= t ; p++) 
    {
        ll n, b;
        cin >> n >>  b;
        ll d=s[n]/log(b)+1;
        printf("Case %lld: %lld\n",p,d);
        
    }
    

    return to_sowmik_roy;
}