#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back


double distance(int x,int y,int v,int w){
    
    
    double ans = sqrt((x-v)*(x-v) + (y-w)*(y-w));
    return ans;
    
}

void solve()
{
    
    
    int x,y,a1,a2,b1,b2;
    cin>>x>>y>>a1>>a2>>b1>>b2;
    double d1,d2,d3,d4,d5;
    d1 = distance(x,y,a1,a2);
    d2 = distance(x,y,b1,b2);
    d3 = distance(0,0,a1,a2);
    d4 = distance(0,0,b1,b2);
    d5 = distance(a1,a2,b1,b2);
    
    double s = max(min(d1,d2),min(d3,d4));
    if(min(d1,d2)==d1 and min(d3,d4)==d3)
    {
        
    }
    else if(min(d1,d2)==d2 and min(d3,d4)==d4)
    {
        
    }
    else
    {
        if(d5>2*s) s = d5/2;
    }
    
    cout <<setprecision(11)<<s<<endl;
    
    
    return ;
    
    
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
