#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fastio                        \
{                                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
}
 

void solve()
{
    ll n;
    cin >> n;
    ll s[n];
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    sort(s,s+n);
    ll c=0;
    for( ll i = n-1 ; i >= 0 ; i--)
    {
        if(s[i]==s[n-1]) continue;
        c=s[i]+s[n-1];
        break;
    }
    cout<<c<<endl;
    


}

int main()
{
    fastio
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
