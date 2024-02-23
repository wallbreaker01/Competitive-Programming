#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    if(a+b==c) cout<<"YES"<<endl;
    else if(b+c==a) cout<<"YES"<<endl;
    else if(c+a==b) cout<<"YES"<<endl;
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
