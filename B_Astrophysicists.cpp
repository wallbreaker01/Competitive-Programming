#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    ll n, k, g, c=0;
    cin >> n >> k >> g;
    for (ll i = 0 ; i < n ; i++) 
    {
        ll x;
        cin>>x;
        ll r=x%g;
        if(r>= (g+1)/2) c+=(x+g-r)-x;
        else c+=-r;
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
