#include <iostream> 
using namespace std;


int main() {
  int n;
  cin>>n;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i - 1; j++) {
      cout << " ";
    }
    for (int j = i; j < i; j++) {
      cout << j << " "; 
    }

    int element = 2 * (n - i - 1);
    for (int j = 1; j <= i - 1; j++) {
      cout << element--;
    }
   cout << endl;
  }
  return 0;
}


