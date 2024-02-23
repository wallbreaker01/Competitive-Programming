#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fastio                        \
{                                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
}
 

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    set<string>v;
    for (ll i = 0 ; i < n-1 ; i++) 
    {
        string x=s.substr(i,2);
        v.insert(x);
    }
    cout<<v.size()<<endl;


}

int main()
{
    fastio
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
