#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define pb push_back

float bisection(float a,float b)
{
    float c=(a+b)/2;
    for(float i=0;i<20;i++)
    {
        float f=c*c*c+c-1;
        if(f<0) a=c;
        else b=c;
        c=(a+b)/2;
    }
    return c;

}


float falsePosition(float a, float b) 
{
    float c = (a * function(b) - b * function(a)) / (function(b) - function(a));
    for (float i = 0; i < 20; i++) 
    {
        float fc = function(c);
        if (fc < 0)
            a = c;
        else
            b = c;
        c = (a * function(b) - b * function(a)) / (function(b) - function(a));
    }
    return c;
}



float newtonRaphson(float initialGuess, float tolerance, int maxIterations) 
{
    float x = initialGuess;

    for (int i = 0; i < maxIterations; ++i) {
        float fx = function(x);
        float fpx = derivative(x);

        if (std::abs(fx) < tolerance) {
            std::cout << "Newton-Raphson method converged to a root after " << i + 1 << " iterations." << std::endl;
            return x;
        }

        x = x - fx / fpx;
    }

    cout << "Newton-Raphson method did not converge within the specified number of iterations." <<endl;
    return NAN;
}