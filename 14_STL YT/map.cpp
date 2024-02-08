#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> m;

    m[13] = "Rajput";
    m[1] = "Jaryal";
    m[2] = "Dikshant";
    m.insert({5, "bheem"});

    cout << "Finding 13 : " << m.count(13) << endl;

    cout << "Finding -13 : " << m.count(-13) << endl;
    cout << "Befor Erase: " << endl;

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    m.erase(13);
    cout << "After Erase: " << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;

    auto it = m.find(2);

    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }

    return 0;
}