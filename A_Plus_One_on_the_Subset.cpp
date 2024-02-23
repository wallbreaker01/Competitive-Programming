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
    vector<int>s(n);
    for (int i = 0 ; i < n ; i++) 
    {
        cin>>s[i];
    }
    sort(s.begin(),s.end());
    cout<<s[n-1]-s[0]<<endl;


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
