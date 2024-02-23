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
    string s;
    cin >> s;
    set<char>v;
    for (ll i = 0 ; i < s.size()/2 ; i++) 
    {
        v.insert(s[i]);
    }
    if(v.size()>=2) yes;
    else no;


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
