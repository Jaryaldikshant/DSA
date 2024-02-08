

// Reference variable means --> 1 person with 2 NAME
#include <iostream>
using namespace std;


void newupdate(int &j)
{
    j--;
}

void update(int n)
{
    n++;
}

int main() 
{

    // int i = 5;

    // // create a reference variable
    // int &j = i;

    // cout << i << endl;

    // i++;

    // cout << i << endl;

    // j++;

    // cout << i << endl;

    int n = 5;
    cout << "Before: " << n << endl;

    update(n); // Here value of n will NOT Change, because n is passed by value means (a copy of n is created here)

    cout << "Passe by value: " << n << endl;

    newupdate(n); // Here value of n WILL Change, because n is passed by referene means(n is reference variable)
    cout << "Passed by reference: " << n << endl;

    
    return 0;
}