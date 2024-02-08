#include <iostream>
#include <queue>
using namespace std;
int main()
{

    queue<string> q;

    q.push("Dikshant");

    q.push("Jaryal");

    cout << "Top Element: " << q.front() << endl;

    cout << "Queue size before pop: " << q.size() << endl;

    q.pop();
    cout << "Top Element after pop: " << q.front() << endl;

    cout << "Queue size after pop: " << q.size() << endl;

    return 0;
}