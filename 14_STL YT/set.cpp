#include <iostream>
#include <set>
using namespace std;
int main()
{

    set<int> s;

    s.insert(1);
    s.insert(9);
    s.insert(5);
    s.insert(9);
    s.insert(5);
    s.insert(6);

    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);
    for (int i : s)
    {
        cout << i << endl;
    }

    cout << "9 is present or not ? " << s.count(9) << endl;

    set<int>::iterator itr = s.find(5);

    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Value present at itr: " << *itr << endl;

    return 0;
}