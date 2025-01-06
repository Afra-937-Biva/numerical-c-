#include<bits/stdc++.h>
using namespace std;

double fun(double x)
{
    return 2*x*x*x-2*x-5;
}
double e=0.00001;

void secentmethod(double a,double b)
{
    int i=1;
    double c;
    cout<<fixed<<setprecision(5);

    if(fun(a)*fun(b)>=0)
    {
        cout<<"Incorrect values of a and b";

        return;
    }
    while(true)
    {
        c=a-((fun(a))*(b-a)/((fun(b)-fun(a))));

        cout<<"Iteration "<<i<<" : ";
        cout<<" a = "<<a<<" , b = "<<b<<" , c = "<<c<<" , ";
        cout<<" f(a) = "<<fun(a)<<" , f(b) = "<<fun(b)<<" , f(c) = "<<fun(c)<<" , ";

        if(fabs(fun(c))<e)
        {
            cout<<endl;
            break;
        }

        a=b;
        b=c;
        cout<<"a=c"<<" , ";
        cout<<"b=c";
        i++;
        cout<<endl;
    }
    cout<<"The accurate root is :"<<c;

}

int main()
{
    double a,b;
    cout<<"Enter the Interval[a and b]:\n";
    cin>>a>>b;

    cout<<"The function used is 2*x*x*x-2*x-5\n";
    cout<<"Initial a= "<<a<<" , Initial b= "<<b<<endl;

    secentmethod(a,b);

    return 0;
}
