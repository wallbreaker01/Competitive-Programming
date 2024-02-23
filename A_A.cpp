#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define babusuna main
#define to_sowmik_roy 0;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    ll n,sum=0,mn=1000000;
    cin >> n;
    ll s[n];
    for (ll i = 0 ; i < n ; i++) cin>>s[i];
    for (ll i = 0 ; i < n ; i++) 
    {
        sum=s[i]*15;
        for (ll j = 0 ; j < s[i] ; j++)
        {
            ll x;
            cin >> x;
            sum+=x*5;
        }
        mn=min(mn,sum);
    }
    cout<<mn<<endl;
    
    


}