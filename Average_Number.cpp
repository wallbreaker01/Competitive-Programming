#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n,k,v;
    cin>>n>>k>>v;
    ll s[n],c=0;
    for (ll i = 0 ; i < n ; i++)
    {
        cin>>s[i];
        c+=s[i];
    }
    ll tot=(n+k)*v;
    ll dif=tot-c;
    if(dif%k==0 and dif>0) cout<<dif/k<<endl;
    else cout<<-1<<endl;
    
    


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
