#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n,c1=0,c2=0,c=0;
    cin>>n;
    string s;
    cin>>s;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='U') c1++;
        else if(s[i]=='D') c1--;
        else if(s[i]=='R') c2++;
        else c2--;
        if(c1==1 and c2==1)
        {
            c=1;
            break;
        }
    }
    if(c) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


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
