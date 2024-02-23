#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    ll n,mn=0,sum=0,c=0;
    cin >> n;
    ll s[n],arr[n];
    for (ll i = 0 ; i < n-1 ; i++) 
    {
        cin>>s[i];
        sum+=s[i];
        mn=min(mn,sum);
    }
    vector<ll>v(n);
    v[0]=1-mn;
    for (ll i = 0 ; i < n-1 ; i++) 
    {
        v[i+1]=v[i]+s[i];
    }
    for (ll i = 0 ; i < n ; i++) 
    {
        if(v[i]<1 or v[i]>n) c=1;
    }
    set<ll>x;
    // if(c)
    // {
    //     for (ll i = 0 ; i < n ; i++) 
    //     {
    //         x.insert(v[i]);
    //     }
    // }
    if(c) c = set<long long>(v.begin(), v.end()).size() == n;
    if(c)
    {
        for (ll i = 0 ; i < n ; i++) cout<<v[i]<<" ";
        cout<<endl;
    }
    else cout<<-1<<endl;
    
    

    //return 0;
}