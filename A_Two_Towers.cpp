#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n, m,c=0,count=0;
    cin >> n >> m ;
    string s, v;
    cin >> s >> v ;
    //string x=s+v;
    for(ll i = 0 ; i < s.size()-1 ; i++)
        if((s[i]=='R' and s[i+1]=='R') or (s[i]=='B' and s[i+1]=='B')) c++;
    for(ll i = 0 ; i < v.size()-1 ; i++)
        if((v[i]=='R' and v[i+1]=='R') or (v[i]=='B' and v[i+1]=='B')) c++;
    if(!c or (c==1 and s[s.size()-1]!=v[v.size()-1] )) cout<<"YES"<<endl;
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
