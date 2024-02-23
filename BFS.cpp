#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll N = 1e5+10;

vector<ll>g[N];
bool vis[N];
int level[N];
void bfs(ll source)
{
    queue<ll>q;
    q.push(source);
    vis[source] = true; //visited or what
    while(!q.empty())
    {
        ll cur_v=q.front();
        q.pop();
        cout<<cur_v<<" ";
        for(ll child : g[cur_v])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[cur_v] + 1;
            }
        }
    }
    cout<<endl;
}

int main()
{
    ll n ;
    cin >> n  ;
    for (ll i = 0 ; i < n-1 ; i++) 
    {
        ll v1, v2;
        cin >> v1 >> v2 ;
        g[v1].push_back(v2);
        g[v2].push_back(v1);

    }
    bfs(1);

    for (ll i = 1 ; i <= n ; i++) 
    {
        cout<<i<<" : "<<level[i]<<endl;
    }
  
}