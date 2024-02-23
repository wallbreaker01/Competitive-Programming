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
    ll n;
    cin >> n;
    for (ll i = 0 ; i < n ; i++) 
    {
        if(i%4==0 or i%4==1) cout<<"a";
        else cout<<"b";
    }
}