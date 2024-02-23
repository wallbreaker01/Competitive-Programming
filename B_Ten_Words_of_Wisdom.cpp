#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    ll n;
    cin >> n;
    ll c=0,index;
    for (ll i = 1 ; i <= n ; i++) 
    {
        ll a,b;
        cin>>a>>b;
        if(a<=10)
        {
            if(b>c)
            {
                c=b;
                index=i;
            }
        }
    }
    cout<<index<<endl;
    
    
    


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
