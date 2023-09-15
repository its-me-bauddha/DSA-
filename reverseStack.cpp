#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &s, int target)
{
    // base case
    if (s.empty())
    {
        cout << "Stack Empty ... .Can't Insert At bottom";
        // top element inserted at bottom
        s.push(target);
        return;
    }
    // top element of stack
    int topElement = s.top();
    s.pop();

    // recursive call
    insertAtBottom(s, target);

    // backtrack
    s.push(topElement);
}

void reverseStack(stack<int> &s)
{
    // base case
    if (s.empty())
    {
        return;
    }

    int target = s.top();
    s.pop();

    // reverse stack
    reverseStack(s);

    // insert at bottom
    insertAtBottom(s, target);
}

int main()
{
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    reverseStack(s);

    cout << "Printing " << endl;

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}