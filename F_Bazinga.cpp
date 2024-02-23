#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const ll N=2e7;
vector<bool>a(N,true);
vector<ll>prime;
vector<bool> p(N+1, true);
vector<ll>v;


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



int main()
{
    sieve();
    for (ll i = 0 ; i < prime.size() ; i++) 
    {
        for (ll j = i+1 ; j < prime.size() and prime[i]*prime[j] <= N ; j++)
        {
            ll x=prime[i]*1LL*prime[j];
            v.push_back(x);
        }
    }
    sort(v.begin(),v.end());

    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin >>  n ;
        cout<<v[n-1]<<endl;
    }
}