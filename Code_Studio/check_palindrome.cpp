#include <iostream>
using namespace std;

// to make string case senstive
char tolowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return ch;

    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPa(char a[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        if (tolowerCase(a[s]) != tolowerCase(a[e]))
        {
            return 0;
        }
        else 
        {
            // Here we have code to apply for ignoring the special characters
            s++;
            e--;
        }
    }
    return 1;
}

void getReverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[])
{
    int count = 0;

    for (int i = 0; i < name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[100];
    cout << "Enter: ";
    cin >> name;

    int len = getLength(name);
    cout << "Length of string: " << len << endl;

    getReverse(name, len);
    cout << "Reverse of string: " << name << endl;

    cout << "Palindrome or Not: " << checkPa(name, len) << endl;

    // cout << "CHARACTER is: " << tolowerCase('b') << endl;
    // cout << "CHARACTER is: " << tolowerCase('C') << endl;

    return 0;
}




// ???
