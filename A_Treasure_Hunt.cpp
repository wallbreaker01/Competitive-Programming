
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

/* Vogoban please code ta accept korai dew >.< */

int main()
{
    ll x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    ll x,y;
    cin>>x>>y;
    ll ab1=abs(x1-x2);
    ll ab2=abs(y1-y2);
    if(ab1%x==0 and ab2%y==0 and (ab1/x)%2==(ab2/y)%2) yes;
    else no;

}