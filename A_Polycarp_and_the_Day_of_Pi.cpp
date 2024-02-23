#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    string s;
    cin >> s;
    string pi="3141592653589793238462643383279502884197";
    ll c=0;
    for (ll i = 0 ; i < s.size() ; i++) 
    {
        if(s[i]==pi[i]) c++;
        else break;
    }
    cout<<c<<endl;
    


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
