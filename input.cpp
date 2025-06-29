// #include<iostream>
// using namespace std;
// int main()
// {
//     int x;
//     char c;
//     double d;
//     char a = 'A'; // ASCII value of 'A' is 65
//     int ascii = a;
//     cin >> x >> c >> d ;
//     cout << x << endl << c << endl << d << endl << ascii << endl;
//     return 0;
// }


//  for ascii value apply typecasting

#include<iostream>
using namespace std;
int main()
{
    int x;
    char c;
    double d;
    char a = 'a'; 
    cin >> x >> c >> d ;
    cout << x << endl << c << endl << d << endl << (int)a << endl;
    return 0;
}