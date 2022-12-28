#include <iostream>
using namespace std;

class Node { 
    public:
    int data;
    Node* next;


 Node (int data)
 {
    this -> data = data;
    this -> next = NULL; 
 }
};



void insertAtTail(Node*&tail ,int d)
{
    // create a new node :
    Node * temp = new Node(d);

    tail -> next = temp ;
    tail = temp; 
}

void insertAtHead(Node* &head ,int d)
{
    // create a new node :
    Node * temp = new Node (d);

    temp -> next = head ;
    head  = temp ;
}

void insertAtPosition(Node *&head,Node * &tail,int position,int d )
{
    // insert at start
    if(position == 1 )      
    {
        insertAtHead(head ,d);
        return ;
    }
    Node *temp= head ;
    int cnt = 1;
    
    
    while(cnt  < position-1 )
    {
        temp = temp -> next;
        cnt++;
    }

    //insert at last position :
    if(temp -> next == NULL)
    {
        insertAtTail(tail , d );
        return;
    }

    //create a new node  for d :

    Node * nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

void printLinkedList( Node * & head)
{
    Node * temp = head; 

    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next ;
    }
    cout << endl;
}

int main (){

    // created a new node
    Node * node1 = new Node(10);
    
    //cout << node1 ->data << endl;
    // cout << node1 ->next << endl;

    // head pointed to node1;
    Node * head =  node1;
    Node * tail =  node1;
    printLinkedList(head);

    //insertAtHead(head,12);
    //printLinkedList(head);

    //insertAtHead(head,15);
   // printLinkedList(head);
  // insertAtHead(head ,13);
  // printLinkedList(head);

    insertAtTail(tail , 12);
    printLinkedList(head);

    insertAtTail(tail , 15);
    printLinkedList(head);

    insertAtPosition(head, tail ,4 ,22);
    printLinkedList(head);

    cout << "Head " << head -> data << endl;
    cout << "Tail " << tail -> data << endl;

return 0;
} 