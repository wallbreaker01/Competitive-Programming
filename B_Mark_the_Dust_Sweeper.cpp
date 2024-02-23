#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll s[n],c=0,x=n-1;
    for (ll i = 0 ; i < n ; i++) cin>>s[i];

    for (ll i = 0 ; i < n-1 ; i++) 
    {
        if(s[i]!=0) //prothome zero thakle er por theke hisab kora lagbe
        {
            x=i;
            break;
        }
    }
    for (ll i = x ; i < n-1 ; i++) 
    {
        if(s[i]==0) c=c+1;
        else if(s[i]!=0) c=c+s[i];
    }
    cout<<c<<endl;


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
