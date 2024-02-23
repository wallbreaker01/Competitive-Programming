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
    string s;
    cin>>s;
    ll c=n;
    for(ll i=0;i<n/2;i++)
    {
        if(( s[i]=='1' and s[n-i-1]=='0' )
        or ( s[i]=='0' and s[n-i-1]=='1' ) )
        {
            c=c-2;
            // i++;
            // j--;
        }
        else
        {
            cout<<c<<endl;
            return;
        }
        
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
