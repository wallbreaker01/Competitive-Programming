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
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    if(n%2)
    {
        cout<<-1<<endl;
        return;
    }
    for (ll i = 1 ; i <= n ; i++) 
    {
        if(i%2!=0) cout<<i+1<<" ";
        else cout<<i-1<<" ";
    }
    cout<<endl;

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
