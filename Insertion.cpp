#include<iostream>
using namespace std;

class Node
    {
        public:
        int data;
        Node* next;  

        // creating a constructor
        Node(int data)
        {
            this -> data = data; 
            this -> next = NULL;  
        }
    };







    //insertion at head:
    void insertAtHead(Node* &head, int d)
 {
    // create new node
    Node* temp = new Node(d);  
    temp -> next = head; // temp ke next ptr ko agli node ke head pe laga diya hai.
    head = temp;  // or agli node ka head temp ke upar laga diya hai.
 }






 // insertion at tail:
 void insertAtTail(Node* &tail, int d)
 {
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}





 //printing:
 void print(Node* &head)
 {
    Node* temp = head;

    while(temp!=NULL)
    {
        cout<<temp -> data<<" ";
        temp = temp->next;
    }
    cout<<endl;
 }






// insert at position:
 void insertAtPosition(Node* &tail,Node* &head, int position, int d)
 {

     // insert at start
     if(position == 1)
     {
        insertAtHead(head,d);
        return ;
     }
    Node* temp = head;
    int cnt = 1;

    while(cnt<position-1)
    {
        temp = temp->next;
        cnt++;
    }





    //inserting at Last position
    if(temp->next == NULL)
    {
        insertAtTail(tail,d);
        return ;
    }





    // creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;
    temp->next = nodeToInsert;

 }







 int main()
{
    Node* node1 = new Node(15); // created a new node
   // cout<<node1 -> data<<endl;  // printing data in that node. 
   // cout<<node1 -> next<<endl;  // printing node1 ka next.

   // head pointed to node 1.
   Node* head = node1;
   Node* tail = node1;
   print(head);


   insertAtTail(tail,20);
   print(head);

   insertAtTail(tail,25);
   print(head);

   insertAtTail(tail,30);
   print(head);



   insertAtPosition(tail, head, 3 ,22);
   print(head);

    insertAtPosition(tail, head, 1 ,5);
   print(head);

    insertAtPosition(tail, head, 2 ,10);
   print(head);
   
   

   cout<<"head"<<" "<<head->data<<endl;
   cout<<"tail"<<" "<<tail->data<<endl;

   return 0;

}