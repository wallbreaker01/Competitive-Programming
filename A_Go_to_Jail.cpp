#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    ll n,c=0,x=0;
    cin >> n;
    vector<ll>s,v;
    while(n--)
    {
        ll a, b;
        cin >> a >> b ;
        // s.push_back(a);
        // v.push_back(b); 
        if(a==b) c++;
        else c=0;
        if(c==3) x=1;


    }
    // for (ll i = 0 ; i < n-3 ; i++) 
    // {
    //     if(s[i]==v[i] and s[i+1]==v[i+1] and s[i+2]==v[i+2]) c=1;
    //    // else break;
    // }
    if(x) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    
    

    
}