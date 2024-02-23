#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    ll n;
    while(cin>>n && n!=0)
    {
        ll s[n];
        for (ll i = 0 ; i < n ; i++) cin>>s[i];
        sort(s,s+n);
        for (ll i = 0 ; i < n ; i++) 
        {
            if(i==n-1) cout<<s[i];
            else cout<<s[i]<<" ";
        }
        cout<<endl;
    }     
}