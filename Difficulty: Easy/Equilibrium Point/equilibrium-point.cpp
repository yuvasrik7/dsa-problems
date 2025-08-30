class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        // code here
        int totsum=0;int leftsum=0;
        
        for(int i=0;i<arr.size();i++)
        {
            totsum+=arr[i];
        }
        for(int i=0;i<arr.size();i++)
        {
            totsum-=arr[i];
            if(leftsum==totsum)
              return i;
            leftsum+=arr[i];  
        }
        return -1;
    }
        
        
        
        
        
        
    };