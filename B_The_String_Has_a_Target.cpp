
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    char c=s[0];
    ll x;
    for (ll i = 0 ; i < n ; i++) 
    {
        if(c>=s[i])
        {
            c=s[i];
            x=i;
        }
    }
    cout<<s[x];
    for (ll i = 0 ; i < n ; i++) 
    {
        if(i!=x) cout<<s[i];
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
    return 0;
}
