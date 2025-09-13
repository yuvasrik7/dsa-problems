class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        // code here
        int maxend=arr[0],minend=arr[0];
        int result=arr[0];
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]<0)
            {
                int temp=maxend;
                maxend=minend;
                minend=temp;
            }
            maxend=max(arr[i],maxend*arr[i]);
            minend=min(arr[i],minend*arr[i]);
            result=max(result,maxend);
        }
          return result;
    }
};