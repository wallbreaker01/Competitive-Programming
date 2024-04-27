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
    string s;
    cin >> s;
    vector<ll>v;
    for (ll i = 1 ; i*i < n ; i++) 
    {
        if(n%i==0) 
        {
            v.pb(i);
            if(n/i!=i) v.pb(n/i);
        }
    }
    sort(v.begin(),v.end());
    for (ll i = 0 ; i < v.size() ; i++) 
    {
        ll c=div[i];
        string s1=s.substr(0,c);
        string s2=s.substr(n-c,c);

        
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
