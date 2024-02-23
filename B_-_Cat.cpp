#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<char>v;
    for (ll i = 0 ; i < n ; i++) 
    {
        if(s[i]=='n' and s[i+1]=='a')
        {
            v.push_back('n');
            v.push_back('y');
            v.push_back('a');
            i++;
        } 
        else v.push_back(s[i]);
    }
    for(auto x: v) cout<<x;
    
    

    
}