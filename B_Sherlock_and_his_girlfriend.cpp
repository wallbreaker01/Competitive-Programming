#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const ll N=1e6+10;
vector<bool>a(N,true);
vector<int>prime;
vector<bool> p(N, true);

void sieve() 
{
    for(ll i = 2 ; i <= N ; i++)
    {
        if(a[i])
        {
            for(ll j = i*i ; j <= N; j = j+i) a[j]=false;
            //prime.push_back(i);
        }
    }
}


void solve()
{
    sieve();
    ll n;
    cin >> n;
    if(n<3)
    {
        cout<<1<<endl;
        for (ll i = 0 ; i < n ; i++) 
        {
            cout<<1<<" ";
        }
        cout<<endl;
    }
    else
    {
        cout<<2<<endl;
        for (ll i = 1 ; i <= n ; i++) 
        {
            if(a[i+1]) cout<<1<<" ";
            else cout<<2<<" ";
        }
        cout<<endl;
    }



}


int main()
{
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
}