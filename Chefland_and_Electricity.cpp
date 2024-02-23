#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    ll n;
    cin >> n;
    vector<ll>v(n+1,0);
    string s;
    cin >> s;
    for (ll i = 0 ; i < n ; i++) cin>>v[i];
    ll res=0,en=0;
    bool flag=false;
    for (ll i = 0 ; i < n ; i++) 
    {
        if(!flag and s[i]=='1')
        {
            flag=true;
            res+=v[i]-v[0];
            en=i;
        }
        if(flag and s[i]=='1')
        {
            ll temp=0;
            for (ll j = en+1 ; j <= i ; j++)
            {
                temp=max(temp,v[j]-v[j-1]);
            }
            res+=(v[i]-v[en]-temp);
            en=i;
        }
    }
    cout<<res+v[n-1]-v[en]<<endl;
    
    


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
