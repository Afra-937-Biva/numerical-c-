#include<bits/stdc++.h>
using namespace std;

double f1(double x)
{
    return x*x*x-x-1;
}
double f2(double x)
{
    return 3*x*x-1;
}

double e=0.00001;

void new_rap(double a,double b)
{
    int i=1;
    double x0=(a+b)/2;
    double x1;
    cout<<fixed<<setprecision(4);

    if(f1(a)*f1(b)>=0)
    {
        cout<<"Icorrect values of a and b\n";
        return;
    }

    while(true)
    {
        x1=(x0-(f1(x0)/f2(x0)));

        cout<<"Iteration "<<i<<" : ";
        cout<<" x0="<<x0<<" , x1= "<<x1<<" , ";
        cout<<"f(x0)= "<<f1(x0)<<" , f'(x0)= "<<f2(x0)<<" , f(x1)= "<<f1(x1)<<"  ,  ";

        if(fabs(f1(x1))<e)
        {
            cout<<endl;
            break;
        }

       /* else if(f1(x0)==0.0)
        {
            break;
        }*/
        else
        {
            x0=x1;

        cout<<"x0=x1";
        }

        i++;
        cout<<endl;

    }

    cout<<"The accurate root is: "<<x1;
}

int main()
{
    double a,b;
    cout<<"Enter the interval [a,b]=";
    cin>>a>>b;
    cout<<"The function used is:x*x*x-x-1\n";
    cout<<"Initial a= "<<a<<"  " <<" Initial b= "<<b<<endl;

    new_rap(a,b);

    return 0;

}

