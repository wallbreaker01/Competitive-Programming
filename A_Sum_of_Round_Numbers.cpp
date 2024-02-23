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
    vector<ll>s;
    ll pow=1;
    while(n>0)
    {
        if(n%10>0) s.push_back((n%10)*pow);
        n=n/10;
        pow=pow*10;
    }
    cout<<s.size()<<endl;
    for(auto n : s) cout<<n<<" ";
    cout<<"\n";



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
