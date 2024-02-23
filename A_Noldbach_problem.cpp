#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const ll N=1e7+10;
vector<bool>a(N,true);
vector<int>prime;
vector<bool> p(N, true);

void sieve() 
{
    for(ll i = 2 ; i <= N ; i++)
    {
        if(a[i])
        {
            for(ll j = i*i ; j <= N; j = j+i) a[j]=false;
            prime.push_back(i);
        }
    }
}



int main()
{
    sieve();
    ll n,k,c=0;
    cin >> n >> k;
    p[1] = 0, p[0] = 0;
    for (ll i = 3; i * i <= N; i += 2)
    {
        if (p[i])
        {
            for (ll j = i * i; j <= N; j += i + i) p[j] = 0;
        }
    }

    for (ll i = 0; prime[i] <= n; i++)
    {
        if (p[prime[i] + prime[i + 1] + 1] and prime[i] + prime[i + 1] + 1 <= n) c++;
    }
    if (c >= k) yes;
    else no;
}
    
    
    
