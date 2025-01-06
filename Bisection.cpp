#include <bits/stdc++.h>
using namespace std;

double func(double x) {
    return 2 * x * x * x - 2 * x - 5;
}

double e = 0.000001;

void bisection(double a, double b)
 {
    int i = 1;  // Initialize iteration counter
    double c;

    cout << fixed << setprecision(6);  // Set precision for outputs

    if (func(a) * func(b) >= 0) {
        cout << "Incorrect values of a and b.\n";
        return;
    }


    while (true) {
        c = (a + b) / 2;

        // Debugging outputs
        cout << "Iteration " << i<< " : " ;
        cout << "a = " << a << ", b = " << b << ", c = " << c << ", ";
        cout << "f(a) = " << func(a) << ", f(b) = " << func(b) << ", f(c) = " << func(c) <<", ";

        if (fabs(func(c)) < e) {  // Check termination condition

            cout<<endl;
            break;

        }

        else if (func(c) * func(a) < 0) {
            b = c; // Root lies in the left half
            cout<<"b=c";

        } else {
            a = c;  // Root lies in the right half
            cout<<"a=c";

        }
        cout<<"\n";

        i++;  // Increment iteration count
    }

    cout << "The accurate root is: " << c << "\n";
}

int main() {
    double a, b;

    // Input for a and b
    cout << "Enter the interval [a, b]:\n";
    cin >> a >> b;

    cout << "The function used is 2*x^3 - 2*x - 5\n";
    cout << "Initial a = " << a << ", Initial b = " << b << "\n";

    bisection(a, b);

    return 0;
}
