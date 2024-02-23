#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll N = 1e5+10;
const ll INF= 1e17+10;
vector<ll>dist;
vector<vector<pair<ll,ll> > >g;

void dijkstra()
{
    dist[1] =0;
    priority_queue <pair<ll,int> ,vector<pair<ll,int> >,greater<pair<ll,int> > > pq;
    pq.push({0,1});
    
    while(!pq.empty())
    {
        int x=pq.top().second;
        ll d=pq.top().first;
        pq.pop();
        if(dist[x]<d) continue;
        else
        {
            for(int i=0;i<g[x].size();i++)
            {
                ll z = g[x][i].first;
                int y= g[x][i].second;
                if(dist[y]<=z+d) continue;
                else
                {
                    dist[y] = z+d;
                    pq.push( {dist[y],y});
                }
            }
        }

    }
}


int main()
{
    ll n , m;
    cin >> n >> m;
    g.resize(n+1);
    dist.resize(n+1);
    for(int i=0;i<m;i++)
    {
        int x,y,z;
        cin >> x >> y >> z;
        g[x].push_back({z,y});
    }
    for(int i=0;i<=n;i++) dist[i] = INF;
    dijkstra();
    for(int i=1;i<=n;i++) cout << dist[i] << " ";
}