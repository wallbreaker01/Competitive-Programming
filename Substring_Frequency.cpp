#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    string s1, s2;
    cin >> s1 >> s2 ;
    ll l2=s2.size(),c=0;
    for (ll i = 0 ; i < s1.size() ; i=i+l2) 
    {
        if(s1[i]==s2[0] and s1[i+1]==s2[1] and s1[i+2]==s2[2]) c++;
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
