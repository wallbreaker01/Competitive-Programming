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
    string s;
    cin >> s;
    ll c=0;
    for (ll i = 0 ; i < n-2 ; i++) 
    {
        for (ll j = i+2 ; j < n ; j++)
        {
            if(s[i]==s[j] && s[i+1]==s[j+1])
            {
                c=1;
                break;
            }
        }
    }
    if(c==1) cout<<"YES"<<endl;
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
