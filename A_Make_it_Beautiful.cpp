#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n;
    cin >> n;
    ll s[n],sum=0,c=0;
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    sort(s,s+n,greater<int>());
    for (ll i = 0 ; i < n-1 ; i++) 
    {
        if(s[i]==s[i+1]) swap(s[i],s[n-i-1]);
    }
    for (ll i = 0 ; i < n ; i++) 
    {
        if(s[i]==sum)
        {
            c++;
            break;
        }
        sum=sum+s[i];
    }
    if(c==0)
    {
        cout<<"YES"<<endl;
        for (ll i = 0 ; i < n ; i++) 
        {
            cout<<s[i]<<" ";
        }
        cout<<endl;
    }
    else cout<<"NO"<<endl;
    



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
