#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    ll n ,c=0;
    cin >> n;
    map<ll,ll>x,y,p,q;
    for (ll i = 0 ; i < n ; i++) 
    {
        ll a,b;
        cin>>a>>b;
        x[a]++;
        y[b]++;
        p[a+b]++;
        q[b-a]++;
    }

    for(auto val:x)
    {
        int q = val.second;
        c+=q*(q-1);
    }
    for(auto val:y)
    {
        int q = val.second;
        c+=q*(q-1);
    }
    for(auto val:p)
    {
        int q = val.second;
        c+=q*(q-1);
    }
    for(auto val:q)
    {
        int q = val.second;
        c+=q*(q-1);
    }

    cout<<c<<endl;
    


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
