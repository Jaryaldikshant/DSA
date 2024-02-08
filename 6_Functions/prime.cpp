#include <iostream>
using namespace std;

void getPrime(int n)
{
    bool num = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            num = 0;
            break;
        }
    }

if (num)
{
    cout<<"Prime: "<<n<<" ";

}

else{
    cout<<"Not Prime: "<<n<<" ";
}
return ;

}
int main()
{
    int n;
    cin >> n;
    getPrime(n);

    return 0;
}