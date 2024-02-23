#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    ll n, k;
    cin >> n >> k ;
    string s;
    cin >> s;
    ll c=0;
    for (ll i = 0 ; i < s.size() ; i++) 
    {
        if(s[i]=='o')
        {
            c++;
            if(c>k and s[i]=='o') s[i]='x'; 
        }
        //if(c==k) break;
        
    }
    cout<<s<<endl;
    
    

    
}