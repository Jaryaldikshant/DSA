#include<iostream>
using namespace std;

int Powr(int numb){
    
    // base case
    if(numb==0)
        return 1;

    int sml_prblm = Powr(numb-1);

    int big_prblm = 2*sml_prblm;


    return big_prblm;
    // or it can be written as "return 2*powr(n-1)"

}

int main(){

int num; 
cin>>num;

int ans = Powr(num);
cout<<ans<<endl;
return 0;
}