#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll N = 1e6+10;
const ll INF= 1e17+10;

vector<pair<ll,ll>>g[N];

int dijkstra(ll start,ll endd)
{
    vector<ll>dist(N,INF);
    priority_queue <pair<ll,ll> ,vector<pair<ll,ll> >,greater<pair<ll,ll> > > pq;
    dist[start] =0;
    pq.push({0,start});
    
    while(!pq.empty())
    {
        ll u=pq.top().second;
        ll v=pq.top().first;
        pq.pop();
        if(dist[u] < v) continue;
        else
        {
            for(auto it : g[u])
            {
                ll q = it.first;
                ll w= it.second;
                if(dist[q] > dist[u] + w)
                {
                    dist[q] = dist[u] + w;
                    pq.push( {dist[q],q});
                }
            }
        }
    }
    return dist[endd];
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll c;
        cin >> c;
        map<string,ll>m;
        for (ll i = 1 ; i <= c ; i++)
        {
            g[i].clear();
            string s;
            cin >> s;
            m[s]=i;
            ll p;
            cin >> p;
            while(p--)
            {
                ll x, y;
                cin >> x >> y ;
                g[i].push_back({x,y});
            }
        }
        ll k;
        cin >> k;
        while(k--)
        {
            string s1, s2;
            cin >> s1 >> s2 ;
            cout<<dijkstra(m[s1],m[s2])<<endl;
        }
    }
}