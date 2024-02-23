#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;


int main()
{
    string s;
    cin>>s;
    ll sum=0,ans,c=1;
    ll l=s.size();
    for (ll i = 0 ; i < l ; i++) sum=sum+s[i]-'0';
    while(sum>=10)
    {
        ans=sum;
        sum=0;
        while(ans>0)
        {
            sum=sum+ans%10;
            ans=ans/10;
        }
        c++; //how many times to make number one digit
    }
    if(l==1) cout<<c-1<<endl;
    else cout<<c<<endl;
     

    
}