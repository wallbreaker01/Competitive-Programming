#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n;
    cin>>n;
    ll s[n];
    for( ll i = 0 ; i < n ; i++) cin>>s[i];
    ll c1=0,sol=-1;
    for( ll i = 0 ; i < n ; i++)
    {
        if(s[i]==2) c1++;
        ll c2=0;
        for( ll j = i+1 ; j < n ; j++)
        {
            if(s[j]==2) c2++;
        }
        if(c1==c2) 
        {
            sol=i+1;
            break;
        }    
    }
    cout<<sol<<endl;
    



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
