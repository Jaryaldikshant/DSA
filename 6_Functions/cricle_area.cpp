#include <iostream>
using namespace std;

float getRad(int n){
    float pie = 3.14;
    float area = n*n*pie;
    return area;
}



int main()
{
    int rad;
    cout << "Enter the value of radius : ";
    cin >> rad;
    float ans = getRad(rad);
    cout << ans << " ";
    return 0;
}