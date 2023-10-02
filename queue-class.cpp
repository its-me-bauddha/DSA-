#include <iostream>
using namespace std;

class Queue {
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue (int size){
        this -> size = size ;
        arr =new int[size];
        front = 0 ;
        rear = 0  ;  
    }

    void push(int data){
            if(rear == size){
                cout << "Q is full" << endl;
            }
            else{
                arr[rear] = data;
                rear++;
            }

    }

    void pop(){
        if(rear == front){
            cout << "Q is empty" << endl;
        }
        else{
            arr[front] = -1;
            front++;
            if(front ==rear){
                front =0;
                rear = 0;
            }
        }
    }

    int getFront(){
        if(front ==rear){
            cout << "Q is empty" << endl;
            return -1;
        }
        else{
          return arr[front];
        }
    }

    bool isEmpty(){
        if(front ==rear){
            cout << "Q is empty" << endl;
            return true;
        }
        else{
            return false;
        }
    }
    int getSize(){
        if(front ==rear){
            return 0;
        }
        else{
            return rear - front;
        }
    }
 
};
int main() {

    Queue q(10);

    q.push(5);
    q.push(15);
    q.push(25);
    q.push(35);
    q.push(45);

    cout << "size of queue is -> " << q.getSize()<<endl;
    q.pop();
    cout << "size of queue is -> " << q.getSize()<<endl;
    cout << "front " << q.getFront() << endl;
    if(q.isEmpty()){
        cout << "Q i s e m p t y " << endl;
    }else{
        cout << "Q i s n o t e m p t y " << endl;
    }


    return 0;
}