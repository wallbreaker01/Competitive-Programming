#include<bits/stdc++.h>
#include<string.h>
typedef long long int ll;
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int temp;
    int x=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(s[i]>s[j])
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    string s2="Timru";
    if(s.compare(s2)==0)
     cout<<"YES"<<endl;
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