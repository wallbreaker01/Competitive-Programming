#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
vector<ll>x[1000000];
vector<ll>g[1000000];
vector<bool>vis;
 

void dfs(ll vertex)
{
    vis[vertex]=true;
    for(ll child : g[vertex])
    {
        if(vis[child]) continue;
        dfs(child);
    }


}

int main()
{
    ll n,m;
    cin>>n>>m;
    while(m--)
    {
        ll u,v;
        cin>>u,v;
        x[u].pb(v);
        x[v].pb(u);
    }
}



