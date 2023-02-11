#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Creating a vector

    vector<int> v;

    int ans = (sizeof(v) / sizeof(int));
    cout << ans << endl;
    cout << "Size -> " << v.size() << endl;
    cout << "Capacity -> " << v.capacity() << endl;

    // insert element in the vector

    v.push_back(5);
    v.push_back(4);

    v.pop_back();

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    int n;
    cin >> n;
    vector<int> brr(n, -101);
    cout << "Size -> " << brr.size() << endl;
    cout << "Capacity -> " << brr.capacity() << endl;

    for (int i = 0; i < brr.size(); i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;

  

    cout << "vector brr is Empty or not !!! " << brr.empty() << endl;



    return 0;
}