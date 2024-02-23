#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 10000005;
vector<int> p(N, 1);
vector<ll> prime,v;
#define fastio                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }

int main()
{
    fastio;
    p[1] = 0, p[0] = 0;
    for (ll i = 2; i  <= N; i ++)
    {
        if (p[i])
        {
        	prime.push_back(i);
            for (ll j = i * 2; j <= N; j += i)
                p[j] = 0;
        }
    }
       set<int>s;
   for(int i=1;i*i<=N;i++)
   {
   	for(int j=1;j*j*j*j<=N;j++){
   	if(i*i+j*j*j*j>N)break;
   	if(p[i*i+j*j*j*j])s.insert(i*i+j*j*j*j);
   	}
   	
   	
   	
   }
   for(auto i:s)v.push_back(i);
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    cin>>n;
 
   int ans=upper_bound(begin(v),end(v),n)-v.begin();
   cout<<ans<<endl;
    }
}