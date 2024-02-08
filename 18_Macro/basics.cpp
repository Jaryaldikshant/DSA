#include <iostream>
using namespace std;

#define PI 3.14 // defining MACRO 


//  No need to allocate memory by assigning variable (no extra storage needed )
// value can't be changed in the code (PI=PI+1) wrong

int main()
{

    int r = 5;

    // double pi = 3.14;

    double area = PI * r * r;


    // PI= PI+1;  can't  do this in Macro value cannot be changed


    cout << "Area is: " << area << endl;

    return 0;
}