#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

void solve()
{
    ll c,m,x;
    cin >> c>>m>>x;
    ll sum=(c+m+x)/3;
    if(c<=sum && c<=m) cout<<c<<endl;
    else if(m<=sum && m<=c) cout<<m<<endl;
    else cout<<sum<<endl;


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
