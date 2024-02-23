#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define babusuna main
#define to_sowmik_roy 0;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const ll N=1e6+10;
vector<bool>a(N,true);
vector<int>prime;

/* Vogoban please code ta accept korai dew >.< */

void sieve()
{
    for(ll i = 2 ; i*i <= N ; i++)
    {
        if(a[i])
        {
            prime.push_back(i);
            for(ll j = i*i ; j <= N; j = j+i) a[j]=false;
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
        ll ans=1;
        for( ll i = 0 ; i < prime.size() and prime[i]*prime[i] <= n ; i++)
        {
            if(n%prime[i]==0)
            {
                ll c=1;
                while(n%prime[i]==0)
                {
                    c++;
                    n=n/prime[i];
                }
                ans=ans*c;
            }
        } 
        if(n>1) ans=ans*2;
        printf("Case %lld: %lld\n",p,ans-1);
    }
    return to_sowmik_roy;
}