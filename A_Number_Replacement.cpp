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
    ll s[n];
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    string str;
    cin >> str;
    ll c=0;
    for (ll i = 0 ; i < n ; i++) 
    {
        for (ll j = 0 ; j <n  ; j++)
        {
            if(str[i]!=str[j] && s[i]==s[j]) c=1;   
        }
    }
    if(c==0) cout<<"YES"<<endl;
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
