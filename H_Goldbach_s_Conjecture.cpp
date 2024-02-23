#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define babusuna main
#define to_sowmik_roy 0;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const ll N=1e7+10;
vector<bool>a(N,true);
vector<int>prime;

/* Vogoban please code ta accept korai dew >.< */

void sieve() 
{
    for(ll i = 2 ; i <= N ; i++)
    {
        if(a[i])
        {
            for(ll j = i*i ; j <= N; j = j+i) a[j]=false;
            prime.push_back(i);
        }
    }
}


int babusuna()
{
    sieve();
    ll t;
    cin >> t;
    for (ll p = 1 ; p <= t ; p++) 
    {
        ll n;
        cin >> n;
        ll c=0;
        for (ll i = 0 ; prime[i] <= (n/2) ; i++) 
        {
            ll x =prime[i];
            ll y = n-x;
            if(a[x] and a[y]) c++;
        }
        printf("Case %lld: %lld\n",p,c);
        
    }
    return to_sowmik_roy;
}