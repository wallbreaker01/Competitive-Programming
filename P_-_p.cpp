#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

/* Vogoban please code ta accept korai dew >.< */

void solve()
{
    ll n,sum=0,c=0;
    cin >> n;
    ll s[n];
    for (ll i = 0 ; i < n ; i++)
    {
        cin>>s[i];
        sum=sum+s[i];
    }
    ll avg=sum/n;
    for (ll i = 0 ; i < n ; i++) 
    {
        if(s[i]>avg) c++;
    }
    printf("%.3lf%\n",c*100/(double)n);
    //cout<<avg<<endl;


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
