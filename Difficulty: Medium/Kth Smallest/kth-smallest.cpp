// User function template for C++

class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        int s=arr.size();
       int max=arr[0];
         for(int i=0;i<s;i++)
         {
             if(arr[i]>max)
             {
                 max=arr[i];
             }
         }
         vector<int> freq(max+1,0);
         for(int i=0;i<s;i++)
         {
             freq[arr[i]]++;
         }
         int count=0;
         for(int i=0;i<=max;i++)
         {
             count+=freq[i];
             if(count>=k) return i;
         }
          return -1;
            
    }
};