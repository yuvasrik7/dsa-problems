// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        // code here
        int min=arr[0],max=arr[0];
        for(int i:arr)
        {
            if(i>max)
            {
                max=i;
            }
            else if(i<min)
            {
                min=i;
            }
        }
        return {min,max};
    }
};