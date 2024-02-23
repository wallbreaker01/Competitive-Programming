#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
 

ll countDigit(ll n) 
{ 
    if (n == 0) 
        return 1; 
    int count = 0; 
    while (n != 0) { 
        n = n / 10; 
        ++count; 
    } 
    return count; 
}


void solve()
{
    ll n;
    cin >> n;
    if(n==1) 
    {
        cout<<1<<endl;
        return;
    }
    if(n==2 and n==3)
    {
        cout<<4<<endl;
        cout<<9<<endl;
        return;
    }
    for (ll i = 4 ; i <= 99 ; i++) 
    {
        ll x=i*i;
        ll y=countDigit(x);
        if(y==n) cout<<x<<endl;

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
