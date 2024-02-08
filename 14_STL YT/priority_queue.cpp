#include <iostream>
#include <queue>
using namespace std;
int main()
{

    // Max Heap
    priority_queue<int> maxi;

    // Min Heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(2);
    maxi.push(4);
    maxi.push(6);
    maxi.push(8);
    maxi.push(10);

    cout << "Size of an priorty queue: " << maxi.size() << endl;

    int n = maxi.size();
    cout << "Max: ";

    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    mini.push(2);
    mini.push(4);
    mini.push(6);
    mini.push(8);
    mini.push(10);

    int m = mini.size();
    cout << "Min: ";
    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

    cout << "Empty or Not? " << mini.empty() << endl;

    return 0;
}