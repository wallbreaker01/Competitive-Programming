#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n,c=1,c2=0;;
    cin >> n;
    ll s[n];
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    for (ll i = 0 ; i < n-1 && c==1 ; i++) 
    {
        if(s[i]<s[i+1]) 
        {
            c=0;
            while(s[i]<=s[i+1]) 
            {
                i++;
                if(i>=n-1) break;
            }
            if(i==n-1)
            {
                c2=1;
                break;
            }
        }
    }
    cout<<((c==1 || c2==1)? "YES" : "NO")<<endl;

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
