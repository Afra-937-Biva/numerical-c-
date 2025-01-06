#include<bits/stdc++.h>
using namespace std;

double add(double a,double b)
{
    return a+b;
}

double subtract(double a,double b)
{
    return a-b;
}

double multiply(double a,double b)
{
    return a*b;
}

double divide(double a,double b)
{
    if(b!=0)
    {
        return a/b;
    }
    else
    {
        cout<<"Division by zero is not allow"<<endl;
        return 0;
    }
}
int main()
{
    double a,b;
    cout<<"Enter the number a and b:\n";
    cin>>a>>b;

    cout<<"Addition:"<<add(a,b)<<endl;
     cout<<"subtraction:"<<subtract(a,b)<<endl;
      cout<<"Multiplication:"<<multiply(a,b)<<endl;
       cout<<"Division:"<<divide(a,b)<<endl;

       return 0;
}
