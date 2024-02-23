#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n;
    cin>>n;
    ll a=0,b=0,i=1;
    while(n>0)
    {
        if(i%4==1 or i%4==0) a=a+min(i,n);
        else b=b+min(i,n);
        n=n-i;
        i++;
    }
    cout<<a<<" "<<b<<endl;


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





