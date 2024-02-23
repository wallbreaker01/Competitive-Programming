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
    vector<ll>v;
    ll s[n];
    ll c=0,sum=0;
    for (ll i = 0 ; i < n ; i++) 
    {
        cin>>s[i];
        if(s[i]!=0)
        {
            v.pb(s[i]);
            c+=abs(s[i]);
        }
    }
    cout<<c<<" ";
    ll x=0;
    for(auto i : v)
    {
        if(i<0)
        {
            if(x==0)
            {
                sum++;
                x=1;
            }
        }
        else x=0;
    }
    cout<<sum<<endl;
    


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
