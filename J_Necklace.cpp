#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
const ll mod = 1e9+7;
const int N = 1e5 + 10;

ll bigMod(ll a, ll b, ll m)
{
    if(b==0) return 1;
    ll x = bigMod(a, b/2, m);
    x = (x*x)%m;
    if(b%2) x = (x*a)%mod;
    return x;
}

ll modInv( ll a, ll m)
{
    return bigMod(a, m-2, m);
}

int main()
{
    int t, tc = 0;
    cin >> t;
    while(t--)
    {
        ll n, k, sum = 0;
        cin >> n >> k;
        for(ll i = 1 ; i <= n ; i++)
        {
            sum += bigMod(k, __gcd(i,n),mod);
            sum %= mod;
        }
        printf("Case %d: %lld\n",++tc,(sum*modInv(n,mod))%mod);
    }
 }