#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back


void solve()
{
    char grid[8][8];
    for(ll i = 0 ; i < 8 ; i++)
    {
        for(ll j = 0 ; j < 8 ; j++)
        {
            cin>>grid[i][j];
        }
    }

    string ans="";
    ll a=0,b=0;
    for(ll i = 0 ; i < 8 ; i++)
    {
        for(ll j = 0 ; j < 8 ; j++)
        {
            if(grid[i][j]!='.')
            {
                ans+=grid[i][j];
                break;
            }
        }
    }
    cout<<ans<<endl;
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
