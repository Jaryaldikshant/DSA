// * * * * *
// *       *
// * * * * *

// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int row = 0; row < 3; row++)
//     {
//         // first row and last row ---> 5 *
//         if (row == 0 || row == 2)
//         {
//             for (int col = 0; col < 5; col++)
//             {
//                 cout << "* ";
//             }
//         }
//         else
//         {
//             // remaining middle row
//             // first star
//             cout << "* ";
//             // spaces
//             for (int sp = 0; sp < 3; sp++)
//             {
//                 cout << "  ";
//             }
//             // last star
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// * * * * *
// *       *
// *       *
// *       *
// *       *
// * * * * *

#include <iostream>
using namespace std;
int main()
{
    int rowCount,colCount;
    cin >> rowCount;
    cin >> colCount;

    for (int row = 0; row < rowCount; row++)
    {
        if (row == 0 || row == rowCount-1)
        {
            for (int col = 0; col < colCount; col++)
            {
                cout << "* ";
            }
        }
        else
        {
            cout << "* ";

            for (int sp = 0; sp < colCount-2; sp++)
            {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }
}