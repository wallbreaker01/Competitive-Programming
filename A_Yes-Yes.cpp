#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    string s1="Yes";
    string s;
    cin >> s;
    for (ll i = 0 ; i < 40 ; i++) s1=s1+"Yes";

    if( (s1.find(s))!= string ::npos ) cout<<"YES"<<endl;
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