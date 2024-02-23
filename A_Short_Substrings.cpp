#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

void solve()
{
    string s;
    cin >> s;
    cout<<s[0];
    for( ll i = 1 ; i < s.size() ; i = i + 2)
    {
        cout<<s[i];
    }
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
