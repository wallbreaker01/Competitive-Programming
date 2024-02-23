#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll N = 1e5+10;
const ll INF= 1e9+10;

// vector<pair<ll,ll> >g[N];
// bool vis[N];

void dijkstra(ll source,ll n,vector<pair<ll,ll> >g[N])
{
    vector<ll>vis(N,0);
    vector<ll>dist(N,INF);
    set<pair<ll,ll> >st;

    st.insert({0,source}); //source er surce er distance 0 korechi
    dist[source]=0;
    
    while(st.size()>0)
    {
        auto node=*st.begin(); //set e minimum element ber kora
        ll v=node.second;
        ll v_dist=node.first;
        st.erase(st.begin());
        if(vis[v]==1) continue;
        vis[v]=1;
        for(auto child : g[v])
        {
            ll child_v=child.first; //node er number
            ll wt=child.second; //node er wt
            if(dist[v]+wt < dist[child_v])
            {
                dist[child_v]=dist[v]+wt; //new dist
                st.insert({dist[child_v],child_v});
            }
        }
    }
    ll ans=0;
    for( ll i = 1 ; i <= n ; i++)
    {
        if(dist[i]==INF) return -1;
        ans=max(ans,dist);
    }
    return
}


ll leetcode(vector<vector<ll>>& times,ll n,ll k)
{
    vector<pair<ll,ll> >g[N];
    for(auto vec : times)
    {
        g[vec[0]].push_back(vec[1],vec[2]);
    }
}



int main()
{
    ll n, m;
    for (ll i = 0 ; i < m ; i++) 
    {
        ll x,y,wt;
        cin >> x >> y >> wt ;
        g[x].push_back({y,wt});
    }
   
}
