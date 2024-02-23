#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;


int main()
{
    ll m,n,c=0;
    char a;
    cin >> n >> m ;
    for (ll i = 0 ; i < n ; i++) 
    {
        for (ll j = 0 ; j < m ; j++)
        {
            cin>>a;
            if(a=='C' || a=='M' || a=='Y')
            {
                c=1;
                break;
            }
        }
    }
    if(c==1) cout<<"#Color"<<endl;
    else cout<<"#Black&White"<<endl;
}
