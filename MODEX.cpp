#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    ll x,y,n;
    cin>>x>>y>>n;
    ll ans=1;
    while(y>0)
    {
        if(y%2==1) ans*=x%n,ans%=n;
        x*=x%n,x%=n,y/=2;
        
    }
    cout<<ans<<endl;


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
