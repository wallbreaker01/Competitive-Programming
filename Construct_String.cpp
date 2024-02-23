#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll c=1;
    for (ll i = 0 ; i < n ; i++) 
    {
        if(s[i]==s[i+1]) c++;
        else
        {
            if(c%2==0) cout<<string(2,s[i]);
            else cout<<s[i];
            c=1;
        }
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
