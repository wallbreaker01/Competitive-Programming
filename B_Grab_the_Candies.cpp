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
    ll n,c=0,sum=0,sum2=0;
    cin >> n;
    ll s[n];
    for (ll i = 0 ; i < n ; i++)
    {
        cin>>s[i];
        if(s[i]%2==0)
        {
            c++;
            sum=sum+s[i];
        }
        else if(s[i]%2!=0) sum2=sum2+s[i];
    }
    if(sum>sum2) yes;
    else no;


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
