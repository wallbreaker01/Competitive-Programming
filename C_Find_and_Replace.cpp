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
    ll n,c=0,dif;
    cin >> n;
    string s;
    cin >> s;
    for (ll i = 0 ; i < n-1 ; i++) 
    {
        for (ll j = i+1 ; j < n ; j++)
        {
            if(s[i]==s[j])
            {
                if((j+i-1)%2==0)
                {
                    c=1;
                    break;
                }
            }
        }
    }
    if(c) no;
    else yes;


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
