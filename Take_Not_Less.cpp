#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n,c=1,c2=1;
    cin>>n;
    ll s[n];
    for( ll i = 0 ; i < n ; i++) cin>>s[i];
    sort(s,s+n,greater<ll>());
    for( ll i = 0 ; i < n-1 ; i++)
    {
        if(s[i]>=s[i+1]) c++;
        //else if(s[i]==s[i+1]) c2++;
        //else if(s[i])
    }
    if(c%2!=0 ) cout<<"Marichka"<<endl;
    else cout<<"Zenyk"<<endl;



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
