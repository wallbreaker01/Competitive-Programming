#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const ll N=1e8+10;
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
    for (ll i = 0 ; i < prime.size() ; i+=100) 
    {
        cout<<prime[i]<<endl;
        
    }
}