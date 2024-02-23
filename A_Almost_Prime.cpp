#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */


bool prime(ll n)
{
    if(n<2) return false;
    for (ll i = 2 ; i <= n/i ; i++)
    {
        if(n%i==0) return false;
    }
    return true;
}


int main()
{
    ll n;
    cin >> n;
    ll c=0;
    for (ll i = 2 ; i <= n ; i++) 
    {
        ll count=0;
        for (ll j = 2 ; j <= i/2 ; j++)
        {
            if(i%j==0 and prime(j)) count++;
        }
        if(count==2) c++;
    }
    cout<<c<<endl;
    

    return 0;
}