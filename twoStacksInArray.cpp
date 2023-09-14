#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int top1;
    int top2;
    int size;

    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }

    // functions
    void push1(int data)
    {
        if (top2 - top1 == 1)
        {
            // space is not available
            cout << "Stack 1 is Overflow ... " << endl;
        }
        else
        {
            // space is available
            // insert
            top1++;
            arr[top1] = data;
        }
    }

    void pop1()
    {
        // stack is empty
        if (top1 == -1)
        {
            cout << "Stack 1 underflow ..." << endl;
        }
        else
        { 
             arr[top1] = -1;
            top1--;
        }
    }
    void push2(int data)
    {
        // stack full
        if (top2 - top1 == 1)
        {
            cout << "Stack 2 is Overflow  ... " << endl;
        }
        else
        {
            // space available
            top2--;
            arr[top2] = data;
        }
    }
    void pop2()
    {
        if (top2 == size)
        {
            // stack 2 is empty
            cout << "Stack 2 underflow ..." << endl;
        }
        else
        {
            // stack 2 is not empty
            arr[top2] = -1;
            top2++;
        }
    }

    void print(){
        for(int i=0 ;i<size;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack s(10);

    s.push1(10);
    s.push2(20);
    s.push1(30);
    s.push2(40);
    s.push1(50);
    s.push2(60);
    s.push1(70);
    s.push2(80);
    s.push1(90);
    s.push2(100);

    //stack overflow
    // s.push1(90);
    // s.push2(100);

    s.pop1();
    s.pop2();

    s.print();
}