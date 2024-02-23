#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const ll N=1e7;
vector<bool>a(N,true);
vector<ll>prime;
vector<bool> p(N+1, true);
vector<ll>v;




int main()
{
    a[1]=0,a[0]=0;
    for(ll i = 3 ; i*i <= N ; i+=2)
    {
        if(a[i])
        {
            for(ll j = i*i ; j <= N; j += i+i) a[j]=0;
            //prime.push_back(i);
        }
    }
    prime.push_back(2);
    for(ll i = 3 ; i <= N ; i+=2)
    {
        if(a[i])
        {
            prime.push_back(i);
        }
    }

    set<ll>s;
    //vector<ll>v;
    for (ll i = 1 ; i*i <= N ; i++) 
    {
        for (ll j = 1 ; j*j*j*j <= N ; j++)
        {
            if(i*i+j*j*j*j>N) break;
            if(prime[i*i+j*j*j*j]) s.insert(i*i+j*j*j*j);
        }
    }
    for (ll i = 0 ; i < s.size() ; i++) 
    {
        v.push_back(i);
    }

    //sort(v.begin(),v.end());

    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin >>  n ;
        ll ans=upper_bound(begin(v),end(v),n)-v.begin();
        cout<<ans<<endl;
    }
}