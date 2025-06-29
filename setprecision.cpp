#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double d = 44.5555;
    cout << fixed << setprecision(2) << d << endl;
    return 0;
}