#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll count=0;
    for (ll i = 0 ; i < n ; i++) 
    {
        ll a=0,b=0,c=0,d=0;
        for (ll j = i ; j < n ; j++)
        {
            if(s[j]=='U') a++;
            if(s[j]=='D') b++;
            if(s[j]=='R') c++;
            if(s[j]=='L') d++;
            if(a==b and c==d) count++;
        }
        
    }
    cout<<count<<endl;
    
    

    return 0;
}