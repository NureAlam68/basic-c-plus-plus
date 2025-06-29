// #include<iostream>
// using namespace std;
// int main()
// {
//     int day;
//     cin >> day;
//     switch(day)
//     {
//         case 1:
//             cout << "Monday" << endl;
//             break;
//         case 2:
//             cout << "Tuesday" << endl;
//             break;
//         case 3:
//             cout << "Wednesday" << endl;
//             break;
//         case 4:
//             cout << "Thursday" << endl;
//             break;
//         case 5:
//             cout << "Friday" << endl;
//             break;
//         case 6:
//             cout << "Saturday" << endl;
//             break;
//         case 7:
//             cout << "Sunday" << endl;
//             break;
//         default:
//             cout << "Invalid day" << endl;
//     }   
//     return 0;
// }



// even odd
// #include <iostream>
// using namespace std;
// int main()
// {
//     int x;
//     cin >> x;
//     switch (x % 2)
//     {
//         case 0:
//             cout << "Even" << endl;
//             break;
//         case 1:
//             cout << "Odd" << endl;
//             break;
//         default:
//             cout << "Invalid input" << endl;
//     }   
//     return 0;
// }


// vowel consonant
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    switch (ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << "Vowel" << endl;
            break;
        default:
            cout << "Consonant" << endl;
    }   
    return 0;
}