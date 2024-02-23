#include<bits/stdc++.h>
#include<string.h>
typedef long long int ll;
using namespace std;

void solve()
{
    string s1;
    cin>>s1;
    char c;
    cin >> c;
    int count=0;
    for (int i = 0 ; i < s1.size() ; i=i+2) 
    {
        if(s1[i]==c) count=1;
    }
    if(count==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    


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
