// used in multiple cases
#include <iostream>
using namespace std;
int main()
{

    int value;
    cout << "Enter the value: ";
    cin >> value;

    switch (value)
    {
    case 1:
        cout << "Love";
        break;

    case 2:
        cout << "Babber";
        break;

    case 3:
        cout << "Raj";
        break;

    case 4:
        cout << "Rahul";
        break;

    default:
        cout << "Dikshant";
        break;
    }
    return 0;
}