#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n,c1=0,c2=0;
    string s;
    cin>>n>>s;
    for (ll i = 0 ; i < s.size() ; i++) 
    {
        if(s[i]=='R') c2++;
    }
    if(c2==0 || c2==n)
    {
        cout<<-1<<endl;
        return;
    }
    for (ll i = 0 ; i < n-1 ; i++) 
    {
        if(s[i]=='R' && s[i+1]=='L')
        {
            cout<<0<<endl;
            break;
        }
        else if(s[i]=='L' && s[i+1]=='R')
        {
            cout<<i+1<<endl;
            break;
        }
    }
    

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
