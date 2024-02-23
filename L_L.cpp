#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll N = 1e5+10;
vector<ll>g[N];
bool vis[N];
ll count_connected=0;
ll total_connected=0;
ll max_connected=0;
ll total_pair_edges=0;

void dfs(ll vertex)
{
    count_connected++;
    vis[vertex] = true; 
    for( ll child : g[vertex])
    {
        if(vis[child]) continue; 
        dfs(child);
    }
}

int main()
{
    ll n, m, k;
    cin >> n >> m >> k ;
    ll s[k];
    for (ll i = 0 ; i < k ; i++) cin>>s[i];
    for (ll i = 0 ; i < m ; i++) 
    {
        ll v1, v2;
        cin >> v1 >> v2 ;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    for (ll j = 0 ; j <= n ; j++)
    {
        vis[j]=false;
    }
    for (ll i = 0 ; i < k ; i++) 
    {
        count_connected=0;
        dfs(s[i]);
        max_connected=max(max_connected,count_connected);
        total_connected+=count_connected;
        total_pair_edges+=(count_connected*(count_connected-1))/2;
    }
    n=n-total_connected+max_connected;
    total_pair_edges=total_pair_edges-((max_connected*(max_connected-1))/2)+(n*(n-1))/2;
    total_pair_edges=total_pair_edges-m;
    cout<<total_pair_edges<<endl;
   
}

