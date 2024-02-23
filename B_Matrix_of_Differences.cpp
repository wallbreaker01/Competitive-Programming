#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n;
    cin >> n;
    ll s[n][n];
    ll x=1,y=n*n;
    for (ll i = 0 ; i < n ; i++) 
    {
        if(i%2!=0)
        {
            for (ll j = n-1 ; j >= 0 ; j--)
            {
                if(j%2==0)
                {
                    s[i][j]=y;
                    y--;
                } 
                else
                {
                    s[i][j]=x;
                    x++;
                }
            }
        }
        else
        {
            for (ll j = 0 ; j < n ; j++)
            {
                if(j%2!=0)
                {
                    s[i][j]=y;
                    y--;
                }
                else
                {
                    s[i][j]=x;
                    x++;
                }
            }
        }
    }

    for (ll i = 0 ; i < n ; i++) 
    {
        for (ll j = 0 ; j < n ; j++)
        {
            cout<<s[i][j]<<" ";
        }
        cout<<endl;
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
