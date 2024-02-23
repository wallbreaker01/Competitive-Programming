#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back


int main()
{
    ll n , m , c=0;
    while(cin>>n)
    {
        map<string,ll>map;
        vector<vector<ll>> adj(n + 1);
        vector<ll> indegree(n + 1,0);
        vector<string>ans;
        string list[n+1];
        string s,v;

        for (ll i = 0 ; i < n ; i++) 
        {
            cin>>s;
            map[s]=i;
            list[i]=s;
        }

        cin>>m;
        for (ll i = 0 ; i < m ; i++) 
        {
            cin>>s>>v;
            indegree[map[v]]++;
            adj[map[s]].pb(map[v]);
        }

        priority_queue<ll, vector<ll>,greater<ll> >p;

        for (ll i = 0 ; i < n ; i++) 
        {
                if(indegree[i] == 0) p.push(i);
        }

         while (!p.empty())
        {
            ll u = p.top();
            p.pop();
            ans.pb(list[u]);
            for (ll i : adj[u])
            {
                indegree[i]--;
                if (indegree[i] == 0) p.push(i);
            }
        }

        cout<<"Case #"<<++c<<": Dilbert should drink beverages in this order:";
        for(auto i : ans) cout<<" "<<i;
        cout<<"."<<endl<<endl;

    }
}