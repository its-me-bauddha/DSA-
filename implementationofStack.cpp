#include <iostream>
using namespace std;

class Stack
{
public:
    int top;
    int *arr;
    int size;

    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    // functions

    void push(int data)
    {
        if (size - top > 1)
        {
            // space available
            // insert
            top++;
            arr[top] = data;
        }
        else
        {
            // space is not available
            cout << "Stack OverFlow..." << endl;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            // stack is empty
            cout << "Stack Underflow ..." << endl;
        }
        else
        {
            // stack is not empty
            top--;
        }
    }
    int getTop()
    {
        if (top == -1)
        {
            cout << "There is not element in stack" << endl;
        }
        else
            return arr[top];
    }
    int getSize()
    {
        return top + 1;
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    // creation
    Stack s(10);

    // insertion
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    // deletion
    // s.pop();

    // stack is empty or not ?
    while (!s.isEmpty())
    {
        cout << s.getTop() << " ";
        s.pop();
    }
    cout << "size : " << s.getSize() << endl;

    return 0;
}