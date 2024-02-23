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
    ll c=0;
    string x="codeforces";
    for (ll i = 0 ; i < s.size() ; i++) 
    {
        if(s[i]==x[i]) c++;
    }
    cout<<s.size()-c<<endl;
    


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
