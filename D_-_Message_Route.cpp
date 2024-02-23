#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll N = 1e5+10;

vector<ll>g[N];
vector<ll>parent(N);
bool vis[N];
int level[N];

void bfs(ll source,ll n)
{
    queue<ll>q;
    q.push(source);
    vis[source] = true;
    parent[source]=-1;
    ll c=0;
    while(!q.empty())
    {
        ll cur_v=q.front();
        q.pop();
        for(ll child : g[cur_v])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[cur_v] + 1;
                parent[child]=cur_v;
                if(vis[n])
                {
                    c++;
                    break;
                }
            }
        }
    }
    vector<ll>ans;
    if(c==0) cout<<"IMPOSSIBLE"<<endl;
    else
    {
        cout<<level[n]+1<<endl;
        for (ll cur_v = n; cur_v != -1; cur_v = parent[cur_v])
        {
            ans.push_back(cur_v);
        }

        reverse(ans.begin(), ans.end());

        for (ll cur_v : ans) cout << cur_v << " ";
    }
}

int main()
{
    ll n,m ;
    cin >> n >>m ;
    for (ll i = 0 ; i < m ; i++) 
    {
        ll v1, v2;
        cin >> v1 >> v2 ;
        g[v1].push_back(v2);
        g[v2].push_back(v1);

    }
    bfs(1,n);
}