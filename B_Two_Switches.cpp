#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b<c or d<a) cout<<0<<endl;
    else if ( b>=c and b>=d and a<=c) cout<<d-c<<endl;
    else if (b>=c and a<=c and b<=d) cout<<b-c<<endl;
    else if(c<=a and a<=d and d<=b) cout<<d-a<<endl;
    else cout<<b-a<<endl;
  
}