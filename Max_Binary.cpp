
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n, k;
    cin >> n >> k ;
    string s;
    cin >> s;
    if(s[0]!='1')
    {
        s[0]='1';
        k=k-1;
        vector<char>v;
        for (ll i = 0 ; i < n ; i++) 
        {
            // if(s[0]=='1') continue;
            // else 
            v.push_back(s[i]);

        }
        for (ll i = 0 ; i < k ; i++) 
        {
            v.push_back('0');
        }
        for(auto x : v) cout<<x;
        cout<<endl;
    }
    else
    {
        vector<char>v;
        for (ll i = 0 ; i < n ; i++) 
        {
            // if(s[0]=='1') continue;
            // else 
            v.push_back(s[i]);

        }
        for (ll i = 0 ; i < k ; i++) 
        {
            v.push_back('0');
        }
        for(auto x : v) cout<<x;
        cout<<endl;
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
    return 0;
}
