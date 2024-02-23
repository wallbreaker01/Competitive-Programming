#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */


ll fact(ll n) 
{
   if (n==0 or n==1) return 1;
   else return n*fact(n-1);
}


int main()
{
    ll t;
    cin >> t;
    for (ll j = 1 ; j <= t ; j++)
    {
        ll n, k;
        cin >> n >> k ;
        //ll com=fact(n)/(fact(k)*fact(n-k));
        // cout<<"Case "<<i<<": "<<com<<endl;
        // i++;
        ll a,b;
        if(k>n-k)
        {
            a=k;
            b=n-k;
        }
        else
        {
            a=n-k;
            b=k;
        }
        ll sum=1;
        // for (ll i = 0 ; i < k ; i++) 
        // {
        //     sum=sum*(n-i);
        //     sum=sum/(i+1);
        // }
        
        for (ll i = n ; i < a ; i--) 
        {
            n=n*i;
        }
        ll x=n/fact(b);
        printf("Case %lld: %lld\n",j,x);
    }
    

    return 0;
}