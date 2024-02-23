#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#include <iostream>
#include <cstring>
#include <algorithm>
#include <tuple>
#include <vector>
const ll N=70;
 
ll vis[N][N];
char v[N][N];
ll dx[4]={1,-1,0,0};
ll dy[4]={0,0,1,-1};
 
ll dfs(ll i,ll j,ll n,ll m)
{
    if (i<0 || j<0 || i>=n || j>=m || v[i][j]=='.' || vis[i][j]==1)
    {
        return 0;
    }
    
    vis[i][j]=1;
    
    for (ll k=0;k<4; k++)
    {
        dfs(i+dx[k],j+dy[k],n,m);
    }
    
    return 1;
}
 
int main()
{
    ll n,m,i,j,hash=0;
    cin>>n>>m;
    for (i=0 ;i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            char x;
            cin>>x;
            if (x=='#') hash++;
            v[i][j]=x;
        }
    }
    ll c=0,ct;
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
 
            if (v[i][j]=='#') c++;
            memset(vis,0,sizeof(vis));
            if (v[i][j]=='#')
            {
                v[i][j]='.';
                ct=0;
                for (ll k=0; k<4; k++)
                {
                    ct+=dfs(i+dx[k],j+dy[k],n,m);
                }
                if (ct>1)
                {
                    cout<<1<<endl;
                    return 0;
                }
                v[i][j]='#';
            }
         
        }
    }
    
 
    if (c>2){
        cout<<2<<endl;
    }
    else if (c<=2){
        cout<<-1<<endl;
    }
 
    return 0;
}