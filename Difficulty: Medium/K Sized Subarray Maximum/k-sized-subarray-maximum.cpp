class Solution {
  public:
 
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        // code here
        vector<int>result;
        deque<int>d;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            if(!d.empty() && d.front()==i-k)
            {
                d.pop_front();
            }
            while(!d.empty() && arr[d.back()]<=arr[i])
            {
                d.pop_back();
            }
            d.push_back(i);
            if(i>=k-1)
            {
                result.push_back(arr[d.front()]);
            }
        }
        return result;
    }
};











