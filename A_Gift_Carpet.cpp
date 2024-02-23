#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    ll n, m;
    cin >> n >> m ;
    char c[4]={'v','i','k','a'},s[n+1][m+1];
    for (ll i = 0 ; i < n ; i++) 
    {        
        for (ll j = 0 ; j < m ; j++)
        {
            cin>>s[i][j];
        }
    }
    ll x=0,count=0;
    for (ll i = 0 ; i < m ; i++) 
    {
        for (ll j = 0 ; j < n ; j++)
        {
            if(s[j][i]==c[x])
            {
                count++;
                x++;
                break;
            }
        }
        if(count==4) break;
    }
    if(count==4) yes;
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
