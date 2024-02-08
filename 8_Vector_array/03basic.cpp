#include<iostream>
#include<vector>
using namespace std;
int main(){

// initializing the elements in the array
vector<int> crr{10,40,60,100};

cout << "Size of b: " << crr.size() << endl;
cout << "Capacity of b: " << crr.capacity() << endl;

for (int i = 0; i < crr.size(); i++)
{

    cout << crr[i] << " ";
}
cout << endl;
cout<<"Vector is empty or not ? "<<crr.empty()<<endl;

vector<int>drr;
cout<<"Drr is empty or not: "<<drr.empty()<<endl;



return 0;
}