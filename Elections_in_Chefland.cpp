
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n, x,c=0;
    cin >> n >> x ;
    ll s[n];
    for (ll i = 0 ; i < n ; i++) 
    {
        cin>>s[i];
        if(s[i]>=x) c++;
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
    return 0;
}
