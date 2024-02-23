#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n,a,c=0;
    cin >> n;
    while(n--)
    {
        cin>>a;
        if(a<=2048) c=c+a;
    }
    if(c>=2048) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
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
