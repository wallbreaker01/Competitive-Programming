#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main ()
{

int n, i, sum = 0;

cin >> n;
string s;
    while(n--)
    {
        cin>>s;
        if(s=="Icosahedron") sum=sum+20;
        if(s=="Cube") sum=sum+6;
        if(s=="Tetrahedron") sum=sum+4;
        if(s=="Dodecahedron") sum=sum+12;
        if(s=="Octahedron") sum=sum+8;
    }
    cout<<sum<<endl;
    return 0;

}
