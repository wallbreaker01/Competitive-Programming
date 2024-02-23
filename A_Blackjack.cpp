#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    ll n;
    cin >> n;
    n=n-10;
    if(n==10) cout<<15<<endl; //16ta 4ta suit er..ekta tula oi gese
    else if( n>=1 && n<=11) cout<<4<<endl;
    else cout<<0<<endl;
       
}