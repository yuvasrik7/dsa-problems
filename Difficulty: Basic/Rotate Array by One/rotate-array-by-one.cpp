// User function Template for C++

class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int temp=arr[arr.size()-1];
        for(int j=arr.size()-1;j>0;j--)
        {
            arr[j]=arr[j-1];
        }
        arr[0]=temp;
        
    }
};