#include <iostream>
using namespace std ;

class LinkedList{
    public:
    int data ;
    LinkedList * next;

    LinkedList(int n )
    {
        this -> data = n;
        
    }



};

int main ()
{

    LinkedList* l1 = new LinkedList(2);
    
    cout << l1->data << endl;

    return 0;
}