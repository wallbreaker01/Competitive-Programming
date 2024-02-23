#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define babusuna main
#define to_sowmik_roy 0;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n,sum=1;
    cin >> n;
    ll s[n];
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    sort(s,s+n);
    if(s[0]>sum) //2nd case
    {
        no;
        return;
    }
    for (ll i = 1 ; i < n ; i++) 
    {
        if(s[i]<=sum) sum+=s[i];
        else 
        {
            no;
            return;
        }
    }
    yes;


}

int babusuna()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return to_sowmik_roy;
}
