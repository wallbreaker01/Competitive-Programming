#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n,sum=0,c=0;
    cin >> n;
    ll s[n];
    for (ll i = 0 ; i < n ; i++)
    {
        cin>>s[i];
        sum=sum+s[i];
    }
    for (ll i = 0 ; i < n-1 ; i++) 
    {
        if(s[i]==-1 && s[i+1]==-1)
        {
            c=1;
            break;
        }
    }
    if(c) cout<<sum+4<<endl;
    else 
    {
        if(sum==n) cout<<sum-4<<endl;
        else cout<<sum<<endl;
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
