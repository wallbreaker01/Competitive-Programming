#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,e;
    cin>>n>>e;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++) arr[i][j]=0;
    }

    vector<vector<int> >v(n);
    int v1,v2\;
    for(int i=0;i<e;i++)
    {
        cin>>v1>>v2;
        arr[v1-1][v2-1]=1;
        arr[v2-1][v1-1]=1;
        v[v1-1].push_back(v2-1);
        v[v2-1].push_back(v1-1);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<i+1<<" : ";
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]+1<<" ";
        }
        cout<<endl;
    }



} 