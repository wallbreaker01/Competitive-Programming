#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 5005
#define INT_N 10000
vector<pair<ll, ll>> adj[N];
ll dis1[N], dis2[N];



void dijkstra(ll source)
{
    priority_queue<pair<ll,ll>> pq;
    for (ll i = 1; i <= N; i++) dis1[i] = INT_N;
    pq.push({0, source});
    dis1[source] = 0;
    while (!pq.empty())
    {
        ll node = pq.top().second;
        ll wt = pq.top().first;
        pq.pop();
        for (auto x : adj[node])
        {
            if (dis1[x.first] > dis1[node] + x.second)
            {
                dis1[x.first] = dis1[node] + x.second;
                pq.push({dis1[x.first], x.first});
            }
        }
    }
}





int main()
{
    ll t, c = 0;
    cin >> t;
    while (t--)
    {
        for (ll i = 0; i <= N; i++)
        adj[i].clear();
        ll n, m;
        cin >> n >> m;
        for (ll i = 1; i <= m; i++)
        {
            ll u, v, w;
            cin >> u >> v >> w;
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }
        dijkstra(1);

        for (ll i = 1; i <= N; i++) dis2[i] = dis1[i];
        dijkstra(n);
        ll ans = INT_N;
        for (ll i = 1; i <= n; i++)
        {
            for (auto j : adj[i])
            {
                ll dist = dis2[i] + dis1[j.first] + j.second;
                if (dist > dis2[n])
                    ans = min(ans, dist);
            }
        }
        cout << "Case " << ++c << ": " << ans << endl;
    }
}