 #include<iostream>
 using namespace std;

 class A{

    public:
    string name;

    void set_name(string n){
        name = n;
    }
 };


// single inheritance
class B : public A{
    public:
    void print_Name(){
        cout<<"Name: "<<name<<endl;
    }
};

//  another parent class
class C {
    public:
    void Print_age(){
        cout<<"The age is 20 year old"<<endl;
    }

};

// Hybrid inheritance: cobination of single and multiple inheritance
class D : public B, public C{

    public:
    void print_weight(){
        cout<<"Weight: 76"<<endl;
    }
};

 int main(){

    D obj1;
    obj1.set_name("Dikshant");

    obj1.print_Name();
    obj1.Print_age();
    obj1.print_weight();
 
 return 0;
 }