#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    string s1, s2;
    cin >> s1 >> s2 ;
    ll c=0;
    for (ll i = 0 ; i < s1.size() ; i++) 
    {
        for (ll j = 0 ; j < s1.size() ; j++)
        {
            if(s1[i]==s2[j]) c++;
        }
    }
    if(c>0)  cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

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
