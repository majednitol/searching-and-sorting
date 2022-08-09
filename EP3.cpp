#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     //  order datatypes
//     cout << 7 / 3.0 << endl;
//     cout << 'c' + 1 << endl;
//     // calculate will be higher data types

//     // double >> float>> long long int >> long int >> int >> character
// }

// range of data types

// -10^9 <int < 10^9
// -10^12 <long int < 10^12
// -10^18 <long long int < 10^18

// int main()
// {
//     // overflow concept
//     int a = 1000000;
//     int b = 1000000;
//     long int c = 1LL * a * b;
//     cout << c << endl;
//     int mx = INT_MAX;
//     cout << mx + 1 << endl; //
// }

int main()
{
    
    double a = 100000000;
    double b = 1000000;
    double c = a * b;
    cout << fixed<< setprecision(0)<<c << endl;
    c = 1e24;
    cout <<c << endl; //  why dont use double ...it,s size very very big ...it create precision error it can't be store real value ...we must use long long int
}