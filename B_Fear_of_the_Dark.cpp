#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back


double distance(int a,int b,int c,int d){
    
    
    double ans = sqrt((a-c)*(a-c) + (b-d)*(b-d));
    return ans;
    
}

void solve()
{
    ll x,y,a1,a2,b1,b2;
    cin>>x>>y>>a1>>a2>>b1>>b2;
    double d1=distance(a1,a2,b1,b2);
    double d2=distance(x,y,a1,a2);
    double d3=distance(x,y,b1,b2);
    double d4=distance(0,0,a1,a2);
    double d5=distance(0,0,b1,b2);

    double s=max(min(d2,d3),min(d4,d5));
    if(d1>2*s) s=d1/2;
    cout<<setprecision(11);
    cout<<s<<endl;

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
