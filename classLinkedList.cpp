#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // default constructor
    Node()
    {
        this->next = NULL;
    }
    // parametrized constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
int getLength(Node *head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp;
    }
    cout << endl;
    return len;
}

//! insertion at head of a linked list
void insertAtHead(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data); // create a new node
    // todo if linked list empty
    if (head == NULL)
    {
        // update head and tail
        head = newNode;
        tail = newNode;
    }
    else
    {
        // todo if linked list  not empty
        newNode->next = head; // attach new node to head node
        head = newNode;       // update head
    }
}

//! insertion at tail of a linked list

void insertAtTail(Node *&head, Node *&tail, int data)
{
    // create a new Node
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        // attach new node to the tail node
        tail->next = newNode;
        tail = newNode;
    }
}
//! insertion at any position of a linked list

void insertAtPosition(Node *&head, Node *&tail, int data, int position)
{
    int length = getLength(head);

    if (position <= 1)
    {
        insertAtHead(head, tail, data);
    }
    else if (position == length + 1 || position == length)
    {
        insertAtTail(head, tail, data);
    }
    else
    {
        // insert at middle of the linked list

        // 1. create a node
        Node *newNode = new Node(data);

        // 2. traverse pre and curr node  to position
        Node *prev = NULL;
        Node *curr = head;
        while (position != 1)
        {
            prev = curr;
            curr = curr->next;
            position--;
        }

        // 3. attach prev to new Node
        prev->next = newNode;
        // 4. attach new Node to curr node
        newNode->next = curr;
    }
}
// printing the linked list

void printLinkedList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
}

// length of a linked list

int main()
{
    // // Creation of node
    Node *head = NULL;
    Node *tail = NULL;
    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtPosition(head, tail, 12, 2);
    printLinkedList(head);

    // Node *first = new Node(10); // dynamic allocation
    // Node *second = new Node(20);
    // Node *third = new Node(30);
    // Node *fourth = new Node(40);
    // Node *fifth = new Node(50);

    // first->next = second;
    // second->next = third;
    // third->next = fourth;
    // fourth->next = fifth;

    // Node *head = first;
    // Node *tail = fifth;
    // cout << "Print Before - > " << endl;
    // printLinkedList(head);
    // insertAtHead(head, tail, 60);
    // insertAtTail(head, tail, 70);

    // cout << "Print After - > " << endl;
    // printLinkedList(head);
    return 0;
}