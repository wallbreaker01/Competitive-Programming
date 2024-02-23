#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n,count=0;
    cin >> n;
    string s;
    cin >> s;
    for (ll i = 0 ; i < n ; i++) s[i]=tolower(s[i]);
    vector<char>v;
    char ch=s[0];
    v.push_back(ch);
    for( ll i = 0 ; i < n ; i++)
    {
        if(s[i]!=ch)
        {
            v.push_back(s[i]);
            ch=s[i];
        }
    }
    if(v[0]=='m' and v[1]=='e' and v[2]=='o' and v[3]=='w' and v.size()==4) cout<<"YES"<<endl;
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
