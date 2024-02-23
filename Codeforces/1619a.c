#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int l=s.length(),count=0;
        if(l%2==0)
        {
            int limit=l/2;
            for(int i=limit;i<l;i++)
            {
                if(s[i]!=s[i-limit])
                {
                    count=1;
                    break;
                }
            }
            if(count==1) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}

