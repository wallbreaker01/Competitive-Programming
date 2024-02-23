#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    ll n;
    cin>>n;
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        if(a>b)sum++;
    }
    cout<<sum<<endl;


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
