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
    char c[n][n];
    for (ll i = 0 ; i < n ; i++) 
    {
        for (ll j = 0 ; j < n ; j++)
        {
            cin>>c[i][j];
        }
    }
    ll count=0;
    for (ll i = 0 ; i < n/2 ; i++) 
    {
        for (ll j = i ; j < n-i-1 ; j++)
        {
            char ch=max({c[i][j],c[n-1-j][i],c[j][n-1-i],c[n-1-i][n-1-j]});
            count=count + abs(ch-c[i][j]) + abs(ch-c[n-1-j][i]) + abs(ch-c[n-1-i][n-1-j]) + abs(ch-c[j][n-1-i]);
        }
    }
    cout<<count<<endl;
    


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
