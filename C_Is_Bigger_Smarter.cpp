#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
const ll N=1001;
ll n,l,a[N],b[N],d[N],pre[N];


ll dp(ll x)
{
    if(d[x]>0) return d[x];
    d[x]=1;
    for (ll i = 1 ; i <= n ; i++)
    {
        if(a[x]>a[i] and b[x]<b[i])
        {
            if(d[x]<dp(i)+1)
            {
                d[x]=d[i]+1;
                pre[x]=i;
            }
        }
    }
    return d[x];
}


void p(ll i)
{
    if(pre[i])
    {
        p(pre[i]);
        cout<<i<<endl;
    }
    else 
    {
        cout<<i<<endl;
        return;
    }
}


int main()
{
    n=0,l=1;
    while(scanf("%d%d",&a[n],&b[++n])!=EOF)
    {
        for (ll i = 1 ; i <= n ; i++) 
        {
            if(dp(i) > dp(l)) l=i;
            cout<<d[l]<<endl;
        }
        
    }
    p(l);
    

}