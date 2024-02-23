#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{  
    pair<ll,ll>a;
    cin>>a.first>>a.second;
    pair<ll,ll>b;
    cin>>b.first>>b.second;
    pair<ll,ll>c;
    cin>>c.first>>c.second;
    
    ll mx1=0,mx2=0;
    
    ll bx=a.first-b.first;
    ll by=a.second-b.second;
    ll cx=a.first-c.first;
    ll cy=a.second-c.second;

    if(bx*cx>0) mx1=min(abs(bx)+1,abs(cx)+1);
    if(by*cy>0) mx2=min(abs(by)+1,abs(cy)+1);
    if(bx*cx>0 and by*cy>0) cout<<mx1+mx2-1<<endl;
    else
    {
        if(mx1==0 and mx2==0) cout<<1<<endl;
        else cout<<max(mx1,mx2)<<endl;
    }    

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
