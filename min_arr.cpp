#include <iostream>
using  namespace std;

int minSum(int &arr,int n )
{
    int ans = INT_MAX;

    for(int i  = 0; i < n ; i++)
    {
        if(arr[i] < arr[i+1])
        {
            ans = arr[i];
        }
    }
    return ans;
}

int maxSum(int &arr[],int n )
{
    int ans = INT_MAX;

    for(int i  = 0; i < n ; i++)
    {
        if(arr[i] > arr[i+1])
        {
            ans = arr[i];
        }
    }
    cout << ans << endl;4
    
}





int main ()
{
    int n ; cin >> n ;
    int arr[n];
    for(int i = 0 ;i< n ; i++)
    {
        cin >> arr[i];
    }

    int min = minSum(arr,n);
    int max = maxSum(arr,n);

    cout << min+max << endl;
}