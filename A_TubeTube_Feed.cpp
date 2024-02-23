
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n, m;
    cin >> n >> m ;
    ll s[n],v[n];
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    for (ll i = 0 ; i < n ; i++) cin>>v[i];
    //sort(v,v+n);
    ll index,mn=-9999,c=0;
    for (ll i = 0 ; i < n ; i++) 
    {
        if(s[i]<=m-i)
        {
            if(v[i]>=mn)
            {
                mn=v[i];
                index=i+1;
                c++;
            } 
        }
    }
    if(c>0) cout<<index<<endl;
    else cout<<-1<<endl;
    
    
    

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
