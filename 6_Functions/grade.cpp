#include <iostream>
using namespace std;

char getGrade(int marks)
{
    // USING IF ELSE

    // if (marks >= 90)
    // {
    //     return 'A';
    // }

    // else if (marks >= 80)
    // {
    //     return 'B';
    // }

    // else if (marks >= 70)
    // {
    //     return 'C';
    // }

    // else if (marks >= 60)
    // {
    //     return 'D';
    // }

    // else
    // {
    //     return 'E';
    // }

    // USING SWITCH CASE

    switch (marks / 10)
    {
    case 10:
    case 9:
        return 'A';
        break;
    case 8:
        return 'B';
        break;
    case 7:
        return 'C';
        break;
    case 6:
        return 'D';
        break;
    default:
        return 'E';
        break;
    }
}

int main()
{
    int marks;
    cout << "Enter the marks: ";
    cin >> marks;

    // for (int i = 0; i <= 100; i++)
    // {
    //     char ans = getGrade(i);
    //     cout << "Grade for marks: " << i << " is " << ans << endl;
    // }

    char finalgrade = getGrade(marks);
    cout << finalgrade << " ";

    return 0;
}