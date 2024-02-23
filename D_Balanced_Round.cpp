#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    ll n,k;
    cin>>n>>k;
    ll s[n];
    for(ll i = 0 ; i < n ; i++) cin>>s[i];
    sort(s,s+n);
    ll ans=0;
    ll c=1;
    for(ll i = 1 ; i < n ; i++)
    {
        if(s[i]-s[i-1]<=k) c++;
        else
        {
            ans=max(ans,c);
            c=1;
        }
    }
    ans=max(ans,c);
    cout<<n-ans<<endl;

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
