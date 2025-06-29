// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     cout << min(a, b) << endl;
//     cout << max(a, b) << endl;
//     return 0;
// }


// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     int a, b, c, d;
//     cin >> a >> b >> c >> d;
//     cout << min({a, b, c, d}) << endl;
//     cout << max({a, b, c, d}) << endl;
//     return 0;
// }


#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    swap(a, b);
    cout << a << " " << b << endl;
    return 0;
}
