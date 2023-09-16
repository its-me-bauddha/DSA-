#include <iostream>
#include <stack>
using namespace std;

vector<int> previousSmaller(vector<int> &v)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(v.size());

    for (int i = 0; i < v.size(); i++)
    {

        int curr = v[i];

        while (s.top() >= curr)
        {
            s.pop();
        }

        ans[i] = s.top();

        s.push(curr);
    }

    return ans;
}

vector<int> nextSmaller(vector<int> &v)
{
    stack<int> s;
    s.push(-1);

    vector<int> ans(v.size());
    for (int i = v.size() - 1; i >= 0; i--)
    {
        int curr = v[i];

        while (s.top() >= curr)
        {
            s.pop();
        }

        ans[i] = s.top();

        s.push(curr);
    }

    return ans;
}

int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);

   // v = nextSmaller(v);
    v = previousSmaller(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}