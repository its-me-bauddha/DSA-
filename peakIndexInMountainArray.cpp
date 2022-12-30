class Solution {
public:


int maxiElemnt(vector<int>& arr)
{
    int ans = arr[0];
    for(int i = 0; i < arr.size();i++)
    {
        if(arr[i] > ans)
        {
            ans = arr[i];
        }
    }
    return ans;
}
    int peakIndexInMountainArray(vector<int>& arr) {
        int element = maxiElemnt(arr);
int i ;
        for(int i = 0 ; i< arr.size() ;i++)
        {
            if(arr[i] == element)
            {
                return i;
            }
        }
        return 0; 
    }
};
