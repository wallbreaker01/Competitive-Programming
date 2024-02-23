#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll N = 1e5+10;
const ll INF= 1e17+10;
vector<ll>dist(N,INF);
vector<vector<pair<ll,ll> > >g;
ll n , m;

void dijkstra(ll source,ll node)
{
    
    map<ll,ll>mp;
    priority_queue <pair<ll,int> ,vector<pair<ll,int> >,greater<pair<ll,int> > > pq;
    dist[source] =0;
    pq.push({0,source});
    while(!pq.empty())
    {
        ll y = pq.top().first;
        ll x = pq.top().second;
        pq.pop();
            for(auto it : g[x])
            {
                ll z = it.first;
                ll d = it.second;
                if(dist[z] > d + y)
                {
                    mp[z] = x;
                    dist[z] = d+y;
                    pq.push( {dist[z] , z});
                }
            }
    }
    ll n = node;
    if(mp[n] == 0) cout<<-1<<endl;
    else
    {
        vector<ll>f;
        mp[1] = -1;
        while(n != -1)
        {
            f.push_back(n);
            n = mp[n];
        }
        reverse(f.begin(),f.end());
        for(auto it : f) cout<<it<<" ";
        cout<<endl;
    }
}


int main()
{
    cin >> n >> m;
    g.resize(n+1);
    for(ll i = 1 ; i <= m ; i++)
    {
        int x,y,z;
        cin >> x >> y >> z;
        g[x].push_back({y,z});
        g[y].push_back({x,z});
    }
    dijkstra(1,n);
}