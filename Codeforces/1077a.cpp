#include<iostream>
using namespace std;
int main()
{
    int i,l,count=0;
    cin>>l;
    int n[l+1];
    for(i=0;i<l;i++) cin>> n[i];
    i=0;
    while(i<l)
    {
        if(n[i]==0 && n[i-1]==1 && n[i+1]==1)
        {
            n[i+1]=0;
            count++;

        }

        i++;
    }
    cout<<count<<endl;
}


