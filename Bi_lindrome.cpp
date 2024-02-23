#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n,c=0;
    cin>>n;
    string s;
    cin>>s;
    unordered_set<char>set;
    for( ll i = 0 ; i <= n ; i++)
    {
        if(set.find(s[i])!=set.end())
        {
            c=1;
            break;
        }
        else set.insert(s[i]);
    }
    if(c) cout<<n-2<<endl;
    else cout<<-1<<endl;

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
