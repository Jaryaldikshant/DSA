//    * * * * *
//    * * * * *
//    * * * * *

#include <iostream>
using namespace std;
int main()
{
    // outer loop - row observe
    for (int row = 0; row < 3; row++)
    {
        // inner loop - column observe
        for (int col = 0; col < 5; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
