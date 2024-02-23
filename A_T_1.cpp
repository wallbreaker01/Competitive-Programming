#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl


int main()
{
    
    ll n,m;
    while(cin>>n>>m)
    {
        vector<vector<ll>> adj(n + 1);
        vector<ll> indegree(n + 1);
        for (ll i = 0; i < m; i++)
        {
            ll u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            indegree[v]++;
        }
        queue<ll> q;
        for (ll i = 1; i <= n; i++)
        {
            if (indegree[i] == 0) q.push(i);
        }
        vector<ll> topSort;
        while (!q.empty())
        {
            ll u = q.front();
            q.pop();
            topSort.push_back(u);
            for(auto i : adj[u])
            {
                indegree[i]--;
                if(indegree[i]==0) q.push(i);
            }
        }
        for (ll i : topSort) cout << i << " ";
        cout << endl;
    }
}