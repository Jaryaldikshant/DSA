#include <iostream>
using namespace std;

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
    char name[10];
    cout << "Enter: ";
    cin >> name;

    int len = getLength(name);
    cout << "Length of string: " << len << endl;

    getReverse(name, len);
    cout<<"Reverse of string: "<< name<<endl;

    return 0;
}