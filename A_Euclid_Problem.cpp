#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back
ll x,y,d;

void extendedEuclid(int a, int b) 
{
    if (b == 0) 
    { 
        x = 1;
        y = 0; 
        d = a; 
        return; 
    }
    extendedEuclid(b, a % b);
    int x1 = y;
    int y1 = x - (a / b) * y;
    x = x1;
    y = y1;
}




int main() 
{
    ll a,b;
    while(scanf("%d %d",&a,&b) != EOF)
    {
        extendedEuclid(a,b);
        cout<<x<<" "<<y<<" "<<d<<endl;
    }
}