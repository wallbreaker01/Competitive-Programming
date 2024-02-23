#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

void solve()
{
    ll n , c=0;
    cin >> n;
    char s[n];
    cin >> s;
    for (ll i = 0 ; i < n ; i++) 
    {
        if(s[i]=='Q') c++;
        else c--;
        if(c<=0) c=0;
    }
    if(c==0) cout<<"Yes"<<endl;
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
