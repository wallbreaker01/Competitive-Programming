#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll N = 1e5+10;

vector<ll>g[N];
bool p,vis[N],team[N];

void dfs(ll vertex)
{
    vis[vertex] = true;
    for( ll child : g[vertex])
    {
        if(vis[child]) continue;
        dfs(child);
    }
}

int main()
{
    ll n, m;
    cin >> n >> m ;
    for (ll i = 0 ; i < 9 ; i++) 
    {
        ll v1, v2;
        cin >> v1 >> v2 ;
        g[v1].push_back(v2);
        g[v2].push_back(v1);

    }
    p = true;
    for(ll i = 1; i <= n; i++)
    {
        if(!vis[i])
        {
            vis[i] = true;
            dfs(i);
        }
    }
    if(!p) cout<<"IMPOSSIBLE"<<endl;
    else  for(ll i = 1; i <= n; i++)
    {
        printf("%d%c",(team[i]?1:2),("\n")[i==n]);
    }
    
   
}