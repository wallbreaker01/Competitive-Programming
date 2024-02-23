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

int main()
{
    fastio
    ll n,l,r,x;
    cin>>n>>l>>r>>x;
    ll s[n];
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    ll ans=0;
    for (ll i = 0 ; i < (1<<n) ; i++) 
    {
        ll mx=-1;
        ll mn=1000000;
        ll sum=0;
        for (ll j = 0 ; j < n ; j++)
        {
            if(i&(1<<j))
            {
                sum+=s[j];
                mx=max(mx,s[j]);
                mn=min(mn,s[j]);
            }
        }
        if(l<=sum and sum<=r and (mx-mn)>=x) ans++;
    }
    cout<<ans<<endl;
    
    

}