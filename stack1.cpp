#include <iostream>
#include <stack>
using namespace std;

int main()
{

    // todo creation
    stack<int> st;

    // todo insertion
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    // todo remove
    st.pop();

    // check element on top
    cout << "Top is : " << st.top() << endl;

    // size of stack
    cout << "Size of stack is : " << st.size() << endl;

    // stack is empty or not ?
    if (st.empty())
        cout << "Stack is empty" << endl;
    else
        cout << "Stack is not empty" << endl;

    return 0;
}