#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<vector<ll>> adj;
vector<bool>vis;


void dfs(ll node)
{
    vis[node] = 1;
    for (auto x : adj[node])
    {
        if (!vis[x]) dfs(x);
    }
}


int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, q, c = 0;
        cin >> n >> m >> q;
        adj.clear();
        vis.clear();
        adj.resize(n + 2);
        vis.assign(n + 2, 0);
        for (ll i = 1; i <= m; i++)
        {
            ll x, y;
            cin >> x >> y;
            adj[x].push_back(y);
        }
        while (q--)
        {
            ll node;
            cin >> node;
            dfs(node);
        }
        for (ll i = 1; i <= n; i++)
        {
            if (vis[i]) c++;
        }
        cout<<c<<endl;
    }
}