#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 


ll gcd(ll a, ll b) 
{
    if (b == 0) return a;
    return gcd(b, a % b);
}


void solve()
{
    ll x,y,k;
    cin>>x>>y>>k;
    if(x>y) swap(x,y);
    if(k==1) cout<<x+gcd(x,y)<<endl;
    else cout<<2*gcd(x,y)<<endl;

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
