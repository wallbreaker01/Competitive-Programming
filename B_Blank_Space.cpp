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
    ll c=0,mx=0;
    for (ll i = 0 ; i < n ; i++) 
    {
        if(s[i]==0)
        {
            c++;
            mx=max(mx,c);
        }
        else c=0;

    }
     cout<<mx<<endl;
    


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
