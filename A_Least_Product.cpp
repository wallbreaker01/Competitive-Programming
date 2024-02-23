#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

void solve()
{
    ll n,temp=0,count=0;
    cin >> n;
    vector<ll>v(n);
    for(ll i = 0 ; i < n ; i++)
    {
        cin>>v[i];
        if(v[i]==0)
        {
            temp=1;
        }
        if(v[i]<0) count++;
    }
    if(temp==1) cout<<0<<endl;
    else
    {
       if(count%2==0)
       {
            cout<<1<<endl;
            cout<<1<<" "<<0<<endl;
       }
       else cout<<0<<endl;
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
