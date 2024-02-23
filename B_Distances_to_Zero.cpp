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
    ll s[n];
    vector<ll>v,left(n),right(n);
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    ll position=0;
    for (ll i = 0 ; i < n ; i++) 
    {
        if(s[i]==0) break;
        else position++;
    }
    
    for (ll i = 0 ; i < n ; i++) 
    {
        if(s[i]==0) position=i;
        left[i]=position;
    }

    for (ll i = n-1 ; i >= 0 ; i--) 
    {
        if(s[i]==0) position=i;
        right[i]=position;
    }

    for (ll i = 0 ; i < n ; i++) 
    {
        ll distance=min(abs(i-left[i]),abs(i-right[i]));
        cout<<distance<<" ";
    }
    cout<<endl;
    
}