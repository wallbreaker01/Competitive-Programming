#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define babusuna main
#define to_sowmik_roy 0;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const ll N=5e6+10;
ll sum[N];
ll s[N];

/* Vogoban please code ta accept korai dew >.< */

void cphi()
{
    for(ll i = 2 ; i <= N; i++) s[i]=i;
    for(ll i = 2 ; i <= N ; i++)
    {
        if(s[i]==i)
        {
            for(int j=i; j<=N; j+=i) s[j]-=s[j]/i;
        }
    }            
}


int babusuna()
{
    cphi();
    sum[1]=0;
    for( ll i = 2 ;  i <= N ; i++)
    {
        sum[i]=(s[i]*s[i])+sum[i-1];
    }

    ll t;
    cin >> t;
    for (ll p = 1 ; p <= t ; p++) 
    {
        ll a, b;
        cin >> a >> b ;
        ll x=sum[b]-sum[a-1];
        printf("Case %lld: %lld\n",p,x);
        
    }
    

    return to_sowmik_roy;
}