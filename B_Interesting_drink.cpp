#include<bits/stdc++.h>
#include<string.h>
typedef long long int ll;
using namespace std;


int main()
{
    ll n;
    cin >> n;
    ll s[n];
    for (int i = 0 ; i < n ; i++) 
    {
        cin>>s[i];
    }
    sort(s,s+n);
    ll q;
    cin >> q;
    ll m;
    while(q--)
    {
        cin>>m;
        ll ans=upper_bound(s,s+n,m)-s;
        cout<<ans<<endl;
    }
    

    
}