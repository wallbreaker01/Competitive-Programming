#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll s[n],z=0,c=0;
    for (ll i = 0 ; i < n ; i++)
    {
        cin>>s[i];
        if(s[i]==0) z++;
    } 
    sort(s,s+n);
    if(z>0) cout<<n-z<<endl;
    else
    {
        for (ll i = 0 ; i < n-1 ; i++)
        {
            if(s[i]==s[i+1]) c=1;
        }
        if(c==1) cout<<n<<endl;
        else cout<<n+1<<endl;
        
    }


}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
