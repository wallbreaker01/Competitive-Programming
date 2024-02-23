#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;


int main()
{
    int t,i;
    cin>>t;
    for( i=1;i<=t;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int sum=a+b+c;
        if(sum%3==0) cout<<"Case "<<i<<": "<<"Peaceful"<<endl;
        else cout<<"Case "<<i<<": "<<"Fight"<<endl;
            
    }
}
