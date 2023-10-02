#include <iostream>
#include <queue>
using namespace std ;

int main() {

queue <int> q ;
//insertion
q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.push(50);

// size 

cout << "Size of the queue " << q.size() << endl;

q.pop() ;

cout << "Size of the queue " << q.size() << endl;

if(q.empty()){
    cout << "Q is empty";
}else{
    cout << "Q is not empty";

}

cout << "Q front " << q.front() << endl;


    return 0;
}