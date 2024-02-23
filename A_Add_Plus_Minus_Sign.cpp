#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n,c=0;
    cin >> n;
    string s;
    cin>>s;
    string v;
    ll ans=s[0]-'0';
    for (ll i = 1 ; i < n ; i++) 
    {
        if(ans==1)
        {
            v=v+'-';
            ans=ans-(s[i]-'0');
        }
        else
        {
            v=v+'+';
            ans=ans+(s[i]-'0');
        }
    }
    cout<<v<<endl;
    


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
