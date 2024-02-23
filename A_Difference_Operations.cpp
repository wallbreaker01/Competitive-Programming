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
    ll s[n],count=0;
    for (int i = 0 ; i < n ; i++) 
    {
        cin>>s[i];
    }
    for (int i = 1 ; i < n ; i++) 
    {
        if( s[i] % s[0] != 0) count++;

    }
    if(count>0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    count=0;
    


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
