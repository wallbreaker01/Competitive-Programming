#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const ll N = 10005;
vector<ll>g[N];
int vis[N], par[N], low[N], dis[N], ans[N];


void dfs(ll u )
{
    static int t = 0;
    low[u] = dis[u] = ++t;
    vis[u] = 1;
    ll child = 0;
    for(auto v : g[u]) 
    {
        if( !vis[v] ) 
        {
            par[v] = u;
            dfs(v);
            low[u] = min(low[u], low[v]);
            child++;
            if( dis[u] <= low[v] && (par[u] != -1 || child > 1) ) 
            {
                ans[u] = 1;
            }
        } else if( v != par[u] ) 
        {
            low[u] = min( low[u], dis[v] );
        }
    }

}

void CLR()
{
    for(ll i = 0; i < N; i++) 
    {
        g[i].clear();
        vis[i] = par[i] = ans[i] = low[i] = dis[i] = 0;
    }
}


int main()
{
    ll n, m;
    while( scanf("%d %d", &n, &m) && n && m ) 
    {

        CLR();
        ll root;
        for(ll i = 0; i < m; i++) 
        {
            int x, y; 
            cin >> x >> y;
            root = x;
            g[x].push_back(y), g[y].push_back(x);
        }
        ll cnt = 0;
        par[root] = -1;
        dfs(root);
        for(ll i = 0; i < N; i++) cnt += (ans[i] != 0);
        cout<<cnt<<endl;
        


    }
}





















package flappyBird;

import javax.swing.*;
import java.awt.*;

public class Renderer extends JPanel {
     private static final long serialVersionUID = 1L;
     protected void paintComponent(Graphics g)
     {
         super.paintComponent(g);
         FlappyBird.flappyBird.repaint(g);
     }

}



    public void jump()
    {
        if(gameOver)
        {
            bird = new Rectangle(WIDTH/2 - 10,HEIGHT/2 - 10,20,20);
            columns.clear();
            yMotion = 0;
            score = 0;

            addColumn(true);
            addColumn(true);
            addColumn(true);
            addColumn(true);
            gameOver = false;
        }
        if(!started)
        {
            started = true;
        }
        else if(!gameOver)
        {
            if(yMotion > 0)
            {
                yMotion = 0;
            }
            yMotion -=10;
        }
    }