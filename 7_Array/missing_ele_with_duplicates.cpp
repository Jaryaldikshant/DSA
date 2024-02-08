#include <iostream>
using namespace std;

// void findMissing(int *a, int n)
// {

//     // visited Method
//     for (int i = 0; i < n; i++)
//     {
//         int index = abs(a[i]);
//         if (a[index - 1] > 0)
//         {
//             a[index - 1] *= -1;
//         }
//     }

//     // all +ve index are missing
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] > 0)
//         {
//             cout << i + 1 << " ";
//         }
//     }
// }

// int main()
// {
//     int n;
//     int a[] = {1, 3, 3, 3, 3};
//     n = sizeof(a) / sizeof(int);

//     findMissing(a, n);








// 2nd Method ---> SORTING + SWAPPING
int main()
{

    int n;
    int a[] = {1, 4, 3, 3, 5};
    n = sizeof(a) / sizeof(int);
    int i = 0;

    while (i < n)
    {
        int index = a[i] - 1;
        if (a[i] != a[index])
        {
            swap(a[i], a[index]);
        }
        else
        {
            ++i;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] != i + 1)
        {
            cout << i + 1 << " ";
        }
    }
    cout << endl;

    return 0;
}