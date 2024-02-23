#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    ll n, m,c=0;
    cin >> n >> m ;
    string s, v;
    cin >> s >> v ;
    for (ll i = 0 ; i < 7 ; i++) 
    {
        if(s.find(v)!=-1)
        {
            c=1;
            cout<<i<<endl;
            break;
        }
        s+=s;
    }
    if(c==0) cout<<-1<<endl;
    

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
