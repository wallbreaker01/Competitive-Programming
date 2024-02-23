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
    if(s.size()%2!=0) cout<<"NO"<<endl;
    else if(s[0]==')' || s[s.size()-1]=='(') cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    
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
