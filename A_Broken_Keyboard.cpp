#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    string s;
    cin >> s;
    set<char>v;
    for (ll i = 0 ; i < s.size() ; i++) 
    {
        if(s[i]!=s[i+1]) v.insert(s[i]);
        else i++;   
    }
    for(auto n : v) cout<<n;
    cout<<endl;


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
