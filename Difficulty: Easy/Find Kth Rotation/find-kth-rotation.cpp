class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int count=0;
        int n=arr.size();
        int i;
        for( i=0;i<n-1;i++)
        {
            if(arr[i]<arr[i+1])
            {
                count++;
            }
            else
            {
                count++;
                break;
            }
            
        }
        if(count==n-1 && i==n-1)
        {
            return 0;
        }
        else return count;
    }
};
