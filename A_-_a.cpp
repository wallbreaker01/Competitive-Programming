#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    string s;
    cin>>s;
    stack<char>v;
    ll l=s.length();
    if(l%2!=0) cout<<"No"<<endl;
    else
    {
        for (ll i = 0 ; i < l ; i++)
        {

                if(s[i]=='('||s[i]=='[') v.push(s[i]);
                else if(!v.empty()&& ( s[i]==')'&&v.top()=='(' || s[i]==']'&&v.top()=='[' ) ) v.pop();
                else v.push(s[i]);

        }
        if(v.empty()) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }



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
