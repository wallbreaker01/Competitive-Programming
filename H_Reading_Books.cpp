#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    ll n,c=0;
    cin >> n;
    ll s[n];
    for (ll i = 0 ; i < n ; i++)
    {
        cin>>s[i];
        c+=s[i];
    }
    sort(s,s+n);
    if(c-s[n-1]>s[n-1]) cout<<c<<endl;
    else cout<<s[n-1]*2<<endl;
  
}