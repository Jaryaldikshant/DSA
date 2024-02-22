// Linked List: type of data structure which is the collection of Nodes

// (Nodes: combination of data and address of next node)

// types of Linked List:

// 1. singly : here each element is connected only to its next element using a pointer

// 2. doubly

// 3. circular

// 4. circular doubly

// Implimentation of Node
// #include <iostream>
// using namespace std;

// class Node
// {

// public:
//     int data;

//     // pointer of node type, which is pointing the next node
//     Node *next;

//     // constructor
//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// int main()
// {

//     // creating in heap memory
//     Node *node1 = new Node(10);

//     cout << node1->data << endl;

//     cout << node1 -> next<<endl;

//         return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;

    Node *next;

public:
    // Node(int d1, Node *n1)
    // {
    //     data = d1;
    //     next = n1;
    // }

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

int main()
{

    vector<int> arr = {2, 5, 8, 7};

    Node *y = new Node(arr[0]);

// for new variable we have to write (->)

    cout << y->next<<endl;
    cout << y->data<<endl;



    // Node y = Node(arr[0], nullptr);

    // cout<<y.data<<endl;

    // cout<<y.next<<endl;

    return 0;
}
