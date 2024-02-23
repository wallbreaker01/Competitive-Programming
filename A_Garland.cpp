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
    // ll n;
    // cin >> n;
    string s;
    cin >> s;
    map<char,ll>m;
    for (ll i = 0 ; i < s.size() ; i++) m[s[i]]++;
    ll x=m.size();
    if(x==1)  cout<<-1<<endl;
    else if(x==3 or x==4)  cout<<4<<endl;
    else
    {
        for (ll i = 0 ; i < m.size() ; i++) //freq ache
        {
            if(m[s[i]]==3)
            {
                cout<<6<<endl;
                return;
            }
        }
        cout<<4<<endl;
    }
    
    


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
