#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll l,r,x,a,b;
    cin>>l>>r>>x>>a>>b;
    if(a==b) cout<<"0"<<endl;
    if(a>b) swap(a,b);
    if(b-a>=x) cout<<"1"<<endl;
    else if(r-b>=x || (b-l>=x && a-l>=x) ) cout<<"2"<<endl;
    else if(r-a>=x && r-l>=x && b-l>=x ) cout<<"3"<<endl;
    else cout<<"-1"<<endl;
    


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
