#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    int t,i;
    cin>>t;
    for(ll p = 1 ; p <= t ; p++)
    {
        ll n,k;
        cin>>n>>k;
        ll sum=0;
        ll s[n];
        for(i = 0 ; i < n ; i++)
        {
            cin>>s[i];
            sum=sum+s[i];
        }
        sort(s,s+n); 
        cout<<"Case " <<p<<": " <<sum+s[n-1]*(k-1)<<endl;
        
    }
}
