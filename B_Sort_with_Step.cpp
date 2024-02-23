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
    ll n, k;
    cin >> n >> k ;
    ll s[n+1];
    for (ll i = 1 ; i <= n ; i++) cin>>s[i];
    ll c=0;
    for (ll i = 1 ; i <= n ; i++) 
    {
        if(abs(s[i]-i)%k!=0) c++;
    }
    if(c==0) cout<<0<<endl;
    else if(c==2) cout<<1<<endl;
    else cout<<-1<<endl;
    


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
