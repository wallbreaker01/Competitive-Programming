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
    vector<ll>v1,v2,v3;
    for (ll i = 0 ; i < n ; i++) 
    {
        ll m;
        cin >> m;
        string s;
        cin >> s;
        if(s=="11") v1.push_back(m);
        else if(s=="10") v2.push_back(m);
        else if(s=="01") v3.push_back(m);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    sort(v3.begin(),v3.end());
    if(v2.size()==0 or v3.size()==0)
    {
        if(v1.size()) cout<<v1[0]<<endl;
        else cout<<-1<<endl;
    }
    else if(v1.size())
    {
        cout<<min(v2[0]+v3[0],v1[0])<<endl;
    }
    else cout<<v2[0]+v3[0]<<endl;
    

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
