#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n;
    cin >> n;
    ll s[n];
    //ll max=-100000;
    vector<ll>v;
    for (ll i = 0 ; i < n ; i++) 
    {
        cin>>s[i];
        v.push_back(s[i]);
        //if (s[i] > max) max = arr[i];
    }
    sort(s,s+n);
    for (ll i = 0 ; i < n ; i++) 
    {
        if(v[i]==s[n-1]) cout<<s[n-1]-s[n-2]<<" ";
        else cout<<v[i]-s[n-1]<<" "; 
    }
    cout<<endl;


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
