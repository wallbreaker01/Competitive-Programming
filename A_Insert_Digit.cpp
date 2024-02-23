
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n, d,c=0;
    cin >> n >> d ;
    string s;
    cin >> s;
    for (ll i = 0 ; i < s.size() ; i++) 
    {
        if(s[i]-'0'<d and c==0)
        {
            cout<<d;
            c=1;
        }
        cout<<s[i];
    }
    if(c==0) cout<<d;
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
    return 0;
}
