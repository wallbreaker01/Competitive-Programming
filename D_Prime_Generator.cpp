#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const ll N=1e8+10;
vector<bool>a(N,true);
vector<int>prime;
vector<bool> p(N, true);

ll isprime(ll n)
{
    if(n==1) return 0;
    bool prime = true;
    for (ll i = 2 ; i <= sqrt(n) ; i++) 
    {
        if(n%i==0)
        {
            prime=false;
            break;
        }
    }
    return prime;
}


void solve()
{
    //sieve();
    ll m, n;
    cin >> m >> n ;
    for (ll i = m ; i <= n ; i++) 
    {
        ll ans=isprime(i);
        if(ans) cout<<i<<endl;
        
    }



}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}