#include <iostream>
using namespace std;
int main()
{
    char name[20];
    cout << "Enter name: ";

    cin >> name;

    name[4] = '\0'; // putting null character in the 4th index , here it will stop here

    cout << "Your name is: " << name;

    return 0;
}