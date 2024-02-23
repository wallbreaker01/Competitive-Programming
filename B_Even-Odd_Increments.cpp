#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

void solve()
{
    ll n,q;
    cin >> n >> q ;
    ll s[n];
    ll even=0,odd=0,sum=0;
    for (ll i = 0 ; i < n ; i++) 
    {
        cin >> s[i];
        if(s[i]%2==0) even++;
        else odd++;
        sum=sum+s[i];
    }
    for(ll i=1;i<q;i++)
    {
        ll a,b;
        cin >> a >> b ;
        if(a==0) sum=even*b;
        else if(a==1) sum=odd*a;
        cout<<sum<<endl;
        
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
