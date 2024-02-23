
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,sum=0;
        cin>>a>>b>>c;
        sum=sum+a+b+c;
        if(sum%9==0)
        {
            int x=min({a,b,c});
            //x=min(x,c);
            if(sum/9<=x) cout<<"YES\n"<<endl;
            else cout<<"NO\n"<<endl;
        }
        else cout<<"NO\n"<<endl;;
     }
}
