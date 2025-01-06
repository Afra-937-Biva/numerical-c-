#include<bits/stdc++.h>
using namespace std;

double func(double x)
{
    return x*x*x-x-1;
}

double e=0.00001;

void bisection(double a,double b)
{
    int i=1;
    double c;
    cout<<fixed<<setprecision(5);

    if(func(a)*func(b)>=0)
    {
        cout<<"Incorrect values of a and b: ";
        return;
    }

    while(true)
    {
        c=(a-((func(a))*(b-a))/(func(b)-func(a)));


        cout<<"Iteration "<<i<<" : " ;
        cout<<"a= "<<a<<" , b= "<<b<<" , c= "<<c<<" ," ;
        cout<<"f(a)= "<<func(a)<<" , f(b)= "<<func(b)<<" , f(c)= "<<func(c)<<" , " ;

        if(fabs(func(c))<e)
        {
            cout<<endl;
            break;

        }

        else if(func(c)*func(a)<0)
        {
            b=c;
            cout<<"b=c";
        }
        else
        {
            a=c;
            cout<<"a=c";
        }
        i++;
        cout<<endl;
    }

    cout<<"The accurate root is: "<<c;
}
int main()
{
    double a,b;
    cout<<"Enter the interval [a,b]= ";
    cin>>a>>b;

    cout<<"The funstion used is:x*x*x-x-1 \n";
    cout<<"Initial a= "<<a<<" ,Initial  b= "<<b<<endl;

    bisection(a,b);
    return 0;
}
