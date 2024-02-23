#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n,c=0,sum=0;
    cin>>n;
    ll s[n];
    vector<ll>v;
    for(ll i=0;i<n;i++)
    {
        cin>>s[i];
        v.push_back(abs(s[i]));
        if(s[i]<0) c++;
        sum=sum+abs(s[i]);
    }
    sort(v.begin(),v.end());
    //sort(s,s+n);
    if(c%2==0) cout<<sum<<endl;
    else cout<<sum-v[0]*2<<endl;

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
