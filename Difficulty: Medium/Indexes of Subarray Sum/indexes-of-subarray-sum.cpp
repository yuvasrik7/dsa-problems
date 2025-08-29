class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        vector<int> arr1;
      for(int i=0;i<arr.size();i++){ int sum=arr[i],k=i+1;
           while(sum<=target && k<=arr.size())
        {  
            if(sum==target)
            { arr1.push_back(i+1);
                arr1.push_back(k);
                return arr1;
            }
            else{ sum+=arr[k++]; }
        }
            
      }
      arr1.push_back(-1);
        return arr1;
    }
};