#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll N = 1e5+10;
 ll tree=0,n,x;
vector<ll>g[N];
bool vis[N];
vector<ll>v;


void dfs(ll vertex)
{
    vis[vertex] = true; 
    for( ll child : g[vertex])
    {
        if(vis[child]) continue;
        dfs(child);
    }
}


void sol()
{
    for (ll i = 0 ; i < n ; i++) 
    {
        if(!vis[i])
        {
            tree++;
            dfs(i);
        }
    }
}


int main()
{
    cin >> n ;
    for (ll i = 0 ; i < n ; i++) 
    {
        cin >> x ;
        g[i].push_back(x-1);
        g[x-1].push_back(i);
    }
    sol();
    cout<<tree<<endl;

   
}

