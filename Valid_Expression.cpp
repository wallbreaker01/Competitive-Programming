#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll mx = INT_MAX;
const ll mn = INT_MIN;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n, x;
    cin >> n >> x ;
    ll a,b,c,d;
    if(x>0)
    {
        a=x-1;
        b=n-a;
        while(a--) cout<<"+";
        while(b--) cout<<"*";
        cout<<endl;
    }
    else if(x>0)
    {
        a=abs(x)+1;
        b=n-a;
        while(a--) cout<<"-";
        while(b--) cout<<"*";
        cout<<endl;
    }
    else if(x==0)
    {
        ll a=n-1;
        while(n--) cout<<"*";
        cout<<"-"<<endl;
    }
    else cout<<-1<<endl;
    
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
