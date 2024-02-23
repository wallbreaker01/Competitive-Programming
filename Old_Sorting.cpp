#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    ll t;
    cin >> t;
    for(ll p=1 ; p <=t ; p++)
    {
        ll n,c=0;
        cin >> n;
        ll s[n],v[n];
        for (ll i = 1 ; i <= n ; i++) 
        {
            cin>>s[i];
            v[s[i]]=i;
        }
        for (ll i = 1 ; i <= n ; i++) 
        {
            if(s[i]!=i)
            {
                c++;
                s[v[i]]=s[i];
                v[s[i]]=v[i];
            } 
        }
        printf("Case %lld: %lld\n",p,c);
    }
}