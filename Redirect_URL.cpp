#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    ll t;
    cin >> t;
    for (ll i = 1 ; i <= t ; i++) 
    {
        string s;
        cin >> s;
        if(s[4]!='s') s.insert(4,"s");
        cout<<"Case "<<i<<": "<<s<<endl;
    }
    

    
}