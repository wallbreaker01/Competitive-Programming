#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;


int main()
{
    ll t,i;
    cin>>t;
    for(i = 1 ; i <= t ; i++)
    {
        ll a,b,c,k;
        cin>>a>>b>>c>>k;
        ll x=a+b+c;
        ll y=(a+b+c)/3;
        if(x%3==0)
        {
            if(abs(y-a)%k==0 && abs(y-b)%k==0 && abs(y-c)%k==0 )
            cout<<"Case " <<i<<": " <<"Peaceful"<<endl;
            else cout<<"Case " <<i<<": " <<"Fight"<<endl;
        }
        else cout<<"Case " <<i<<": " <<"Fight"<<endl;
    }
}