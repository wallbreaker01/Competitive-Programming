#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    ll n ,c=0;
    cin >> n;
    for (ll i = 1 ; i < n ; i++) if(n%i==0) c++;
    cout<<c<<endl;
  
}