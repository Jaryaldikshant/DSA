#include <iostream>
using namespace std;
int main()
{
    bool a = false;
    bool b = true;

    // And Operator
    cout << (a & b) << endl;

    // Or Operator
    cout << (a | b) << endl;

    // Xor Operator
    cout << (a ^ b) << endl;

    // Not Operator
    cout << ~(a) << endl;

    // Left Shift Operator
    // we multiply with 2;
    int x = 12;
    x = x << 1;
    cout << "X:" << x << endl;

    // Right Shift Operator
    // we divide with 2
    int y = 12;
    y = y >> 1;
    cout << y;
}
