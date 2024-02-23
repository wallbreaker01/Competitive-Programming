#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define babusuna main
#define to_sowmik_roy 0;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n,c=0;
    cin >> n;
    string v,x;
    for (ll i = 0 ; i < 2*n-2 ; i++) 
    {
        string s;
        cin >> s;
        if(s.size()==n/2 and c==0) 
        {
            v=s;
            c++;
        }
        else if(s.size()==n/2) x=s;
    }
    reverse(v.begin(),v.end());
    if(v==x) yes;
    else no;



}

int babusuna()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return to_sowmik_roy;
}
