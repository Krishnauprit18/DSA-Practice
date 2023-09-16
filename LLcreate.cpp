#include<iostream>
using namespace std;

class Node
    {
        public:
        int data;
        Node* next;  // node* naam ka pointer hai jo ki next node ko point kar raha hai.

        // creating a constructor
        Node(int data)
        {
            this -> data = data;  // this ka matlab ki is node ka data.
            this -> next = NULL;  // this ka matlab ki is node me jo pointer hai vo next node
                                 //   ko point kar raha hai.
        }
    };


int main()
{
    Node* node1 = new Node(15); // created a new node.
    cout<<node1 -> data<<endl;  // printing data in that node.
    cout<<node1 -> next<<endl;  // printing node1 ka next.
}
