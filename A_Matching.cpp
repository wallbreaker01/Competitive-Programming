#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    string s;
    cin >> s;
    ll c=1;
    if(s[0]=='0') c=0;
    for (ll i = 0 ; i < s.size() ; i++) 
    {
        if(s[i]=='?')
        {
            if(i==0) c=c*9;
            else c=c*10;
        }
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
    return 0;
}
