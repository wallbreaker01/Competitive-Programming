#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n,a,b;
    cin >> n >> a >> b;
    if(a==b && a==n) cout<<"Yes"<<endl;
    else if((n-a-b)>1) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
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
