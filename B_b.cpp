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
    if(n<3)
    { 
        cout<<-1<<endl;
        return;
    }
    else if(n%2==1)
    {
        for (ll i = 1 ; i <= n ; i++) 
        {
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    cout<<"2 3 1 4 ";
    for (ll i = 5 ; i < n+1 ; i++) 
    {
        cout<<i<<" ";
    }
    cout<<endl;



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
