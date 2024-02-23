#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const ll N=1e6+10;
vector<bool>a(N+1,true);
vector<ll>prime;
vector<bool> p(N, true);

void fun() 
{
    for(ll i = 2 ; i <= N ; i++)
    {
        if(a[i])
        {
            prime.push_back(i);
            for(ll j = i*i ; j <= N; j = j+i) a[j]=false;
            
        }
    }
}


void solve()
{
    ll n,k;
    cin >> n >> k;
    ll c=0,count=0;
    for (ll i = 0 ; i < prime.size() ; i++) 
    {
        ll x=prime[i]*prime[i];
        if(x<=n)
        {
            c++;
            if(x>k) count++;
        }
        else break;
    }
    cout<<c<<" "<<count<<endl;
    c=0;count=0;
}


int main()
{
    fun();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}




