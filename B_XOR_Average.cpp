#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n;
    cin >> n;
    if(n%2==0)
    {
        for (ll i = 0 ; i < n-2 ; i++) 
        {
            cout<<"2"<<" ";
        }
        cout<<"1"<<" "<<"3"<<endl;
    }
    else
    {
        for (ll i = 0 ; i < n ; i++) 
        {
            cout<<"69"<<" "; //any number
        }
        cout<<endl;
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
