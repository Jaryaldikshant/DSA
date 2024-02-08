#include <iostream>
#include <vector>
using namespace std;
int main(){

int n;
cout<< "Enter the value of n: " << endl;
cin >> n;

// Initializing size and same value in the array
vector<int> brr(n, -9);
cout << "Size of b: " << brr.size() << endl;
cout << "Capacity of b: " << brr.capacity() << endl;

for (int i = 0; i < brr.size(); i++)
{

    cout << brr[i] << " ";
}
cout << endl;

return 0;
}