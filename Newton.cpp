#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back


void Lagrange ()
{
    for(i=1;i=n;i++)
    {
        p=1;
        for(j=1;j<=n;j++)
        {
            if(i!=j) 
                p = p* (xp - x[j])/(x[i] - x[j]);
        }
        yp = yp + p * y[i]
    }
    cout<<endl<<"Interpolated value at "<< xp<<" is "<< yP;
}

#include<stdio.h>
#include<conio.h>

void main()
{
float x[10],y[10],X,p=1,u,h,val;

int i,j,n;
printf("OUTPUT\n");
printf("Number of arguments\n");
scanf("%d",&n);
printf("Enter the value of x and f(x)\n");
printf("x\t\tf(x)\n");

for(i=1;i<=n;i++)
    scanf("%f\t%f",&x[i],&y[i]);

    h=x[2]-x[1];
    printf("Value of x where the functional value is to be determined ");
    scanf("%f",&X);
    u=(X-x[1])/h;
    val=y[1];
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=n-i;j++)
            y[i]=y[j+1]-y[j];
        p=p*(u-i+1)/i;
        val=val+p*y[1];
    }
    printf("The value of f(%f)=%f",X,val);
    getch();
}