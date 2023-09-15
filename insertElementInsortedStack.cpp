#include <iostream> 
#include <stack>
using namespace std;

void insertSorted(stack <int> &s ,int target ){
    // base case  if stack is empty
    if(s.empty()){
        s.push(target);
        return;
    }

    // base case when stack is not empty
    if(s.top() >= target){
        s.push(target);
        return;
    }

    // top element
    int topElement = s.top();
    s.pop();

    // recursive call
    insertSorted(s,target);

    // backtrack
    s.push(topElement); 

}

void sortStack(stack <int> &s){
    //base case 
    if(s.empty()){
        return;
    }

    //top element 
    int topElement = s.top();
    s.pop();

    //recursive call
    sortStack(s);

    // calling  the insert sorted function
    insertSorted(s,topElement);
}



int main () {

  stack <int> s; 
  s.push(7);
  s.push(11);
  s.push(3);
  s.push(5); 
  s.push(9);

   sortStack(s);
 
  cout << "Printing " << endl;

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

}