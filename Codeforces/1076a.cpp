#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    long long int i,n,count=-1;
    string s;
    cin>>n>>s;
    for(i=0;i<n-1;i++)
    {
        if(s[i]>s[i+1])
        {
            count=i;
            break;
        }
    }
    if(count!=-1) s.erase(s.begin()+count);
    else s.erase(s.begin()+n-1);
    cout<<s<<endl;
}
