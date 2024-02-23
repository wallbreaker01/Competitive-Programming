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
    ll n,c=0,c2=0;
    cin >> n;
    ll s[n];
    for (ll i = 0 ; i < n ; i++) 
    {
        cin>>s[i];
        if(s[i]==0) c++;
        else c2++;
    }
    sort(s,s+n);
    if(c==0 or c2+1>=c)
    {
        cout<<0<<endl;
        return;
    }
    if(s[n-1]==1)
    {
        cout<<2<<endl;
        return;
    }
    cout<<1<<endl;
    
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
