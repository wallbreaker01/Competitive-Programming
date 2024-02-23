#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

void solve()
{
    ll a,b,c;
    cin >> a>>b>>c;
    if(a==1) cout<<"1"<<endl;
    else
    {
        if( (a>b) && (a<c) || (a<b && c<b)  ) cout<<"1"<<endl;
        else if( a>b && b>c  ) cout<<"2"<<endl;
        else if((b<c && b<a) && (a==b))  cout<<"3"<<endl;
        
        

    }
    

    


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
