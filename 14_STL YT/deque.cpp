#include <iostream>
#include <deque>
using namespace std;
int main()
{

    deque<int> d;

    d.push_back(2);
    d.push_front(1);
    d.push_front(4);
    d.push_back(6);

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    // d.pop_back();
    // d.pop_front();

    cout << "Print 1st index element: " << d.at(0) << endl;

    cout << "Front element: " << d.front() << endl;

    cout << "Back element: " << d.back() << endl;

    cout << "An array is Empty or Not? " << d.empty() << endl;

    cout << "Before Erasing: " << d.size() << endl;

    d.erase(d.begin(), d.begin() + 1);

    cout << "After Erasing: " << d.size() << endl;

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
}