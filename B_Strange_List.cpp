#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

void solve()
{
    ll n,x;
    cin >> n >> x ;
    vector<ll>v;
    ll s[n],sum=0;
    for (ll i = 0 ; i < n ; i++)
    {
        cin>>s[i];
        sum=sum+s[i];
        v.push_back(s[i]);
    }
    ll c=0;
    while(c==0)
    {
        for (ll i = 0 ; i < n ; i++) 
        {
            if(v[i]%x!=0)
            {
                c=1;
                break;
            }
            sum=sum+s[i]; //copy gulaw add kora
            v[i]=v[i]/x; //creating copy
        }
    }
    cout<<sum<<endl;
    


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
