#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define babusuna main
#define to_sowmik_roy 0;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const ll N=1e6+10;
vector<bool>a(N,true);
vector<int>prime;

/* Vogoban please code ta accept korai dew >.< */

void sieve()
{
    for(ll i = 2 ; i*i <= N ; i++)
    {
        if(a[i])
        {
            prime.push_back(i);
            for(ll j = i*i ; j <= N; j = j+i) a[j]=false;
        }
    }
}


int babusuna()
{
    sieve();
    ll t,n,m;
    cin >> t;
    for (ll p = 1 ; p <= t ; p++) 
    {
        cin >> n;
        vector<ll>v(N);
        for (ll i = 1 ; i <= n ; i++) v[i]=i;
        vector<ll>freq(N,0);
        for (ll i = 0 ; prime[i] <= n and i < prime.size() ; i++) 
        {
            m=prime[i];
            for (ll j = m ; j <= n ; j+=m) 
            {
                while(v[j] % m == 0) //prime factorization
                {
					v[j] = v[j] / m;
					freq[m]++; //prime er frequency entry
				}
            }
        }
        printf("Case %lld: %lld = ",p,n);

        for (ll i = 0 ; prime[i] <= n and i < prime.size() ; i++) 
        {
            printf("%lld (%lld)",prime[i], freq[prime[i]]);
            if(i != prime.size() - 1 and prime[i+1] <= n) 
            {
				printf(" * ");
			}
        }
        cout<<endl;    
    }
    return to_sowmik_roy;
}