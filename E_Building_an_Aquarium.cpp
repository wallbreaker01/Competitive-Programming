#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back


void solve()
{   
    ll n, m; 
    cin >> n >> m; 
    ll s[n]; 
    for (ll i = 0; i < n; i++) cin >> s[i]; 
    ll l = 0, r = INT_MAX, ans = -1, c; 
    while (l <= r) 
    { 
        ll mid=(l+r)/2; 
        c=0; 
        for (ll i = 0; i < n; i++) 
        { 
            if (mid > s[i]) c+=(mid-s[i]);  
        } 
        if(c<=m) 
        { 
            ans=mid; 
            l=mid+1; 
        } 
        else r=mid-1; 
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
