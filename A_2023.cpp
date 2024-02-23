#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    ll n,k;
    cin >> n >> k;
    ll c=1;
    for (ll i = 0 ; i < n ; i++) 
    {
        ll a;
        cin>>a;
        c*=a;
    }
    if(2023%c==0)
    {
        yes;
        cout<<2023/c<<" ";
        for (ll i = 1 ; i <= k-1 ; i++) 
        {
            cout<<1<<" ";
        }
        cout<<endl;
    }
    else no;


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
