
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    ll n;
    cin >> n;
    ll s[n];
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    sort(s,s+n);
    swap(s[n-1],s[n-2]);
    if(s[n-2]<s[n-1]+s[n-3])
    {
        yes;
        for (ll i = 0 ; i < n ; i++) cout<<s[i]<<" ";
        cout<<endl;
    }
    else no;

}