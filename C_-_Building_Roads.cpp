#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll N = 1e5+10;

vector<ll>g[N];
bool vis[N];
vector<ll>bridges;

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
    for (ll i = 0 ; i < m ; i++) 
    {
        ll v1, v2;
        cin >> v1 >> v2 ;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    for (ll i = 1 ; i <= n ; i++) 
    {
        if(!vis[i])
        {
            bridges.push_back(i);
            dfs(i);
        }
    }

    cout<<bridges.size()-1<<endl;
    for (ll i = 0 ; i < bridges.size()-1 ; i++) 
    {
        cout<<bridges[i]<<" "<<bridges[i+1]<<endl; 
    }
}


