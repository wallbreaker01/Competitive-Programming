#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int s[n],i,count=0;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    sort(s,s+n);
    for(i=0;i<n-2;i++)
    {
        if(s[i]+s[i+1]>s[i+2])
        {
            cout<<"YES"<<endl;
            count=1;
            break;
        }
    }
    if(count==0) cout<<"NO"<<endl;
}
