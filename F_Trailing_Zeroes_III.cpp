#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define babusuna main
#define to_sowmik_roy 0;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const ll N=1e17+10;

/* Vogoban please code ta accept korai dew >.< */

ll zero(ll n)
{
    ll c=0;
    for(ll i = 5 ; i <= n ; i = i*5) c=c+(n/i);
    return c;
}


int babusuna()
{
    // sieve();
    ll t;
    cin >> t;
    for (ll p = 1 ; p <= t ; p++) 
    {
        ll q;
        cin >> q;
        ll low=1,high=N,mid,c=-1;
        while(low <= high)
        {
            mid=(high+low)/2;
            ll z=zero(mid);
            if(z<q) low=mid+1;
            else if(z>q) high=mid-1;
            else
            {
                c=mid;
                high=mid-1;
            }
        }
        if(c!=-1) printf("Case %d: %lld\n",p,c);
        else printf("Case %lld: impossible\n",p);
        
    }
    return to_sowmik_roy;
}