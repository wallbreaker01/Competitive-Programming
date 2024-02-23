#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<math.h>
typedef long long int ll;
using namespace std;

void solve()
{
    ll n,ch;
    char character;
    cin >> n;
    string s;
    cin>>s;
    for (int i = 0 ; i < s.size() ; i++) 
    {
        if(s[i+2]=='0' && s[i+3]!='0')
        {
            ch=stoi(s.substr(i,2)); //string to integer
            character=96+ch;
            cout<<character;
            i+=2;
        }
        else
        {
            ch=s[i]-48;
            character=96+ch;
            cout<<character;
        }
        
    }
    cout<<endl;


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
