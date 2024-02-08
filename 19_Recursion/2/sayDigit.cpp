#include <iostream>
using namespace std;

void saydigit(int num, string arr[])
{

    if (num == 0)
    {
        return;
    }

    int digit = num % 10;
    num = num / 10;

    // recursive call

    saydigit(num, arr);

    cout << arr[digit] << " ";
}

int main()
{

    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    int num;
    cin >> num;

    cout << endl;

    saydigit(num, arr);

    cout << endl;
    return 0;
}