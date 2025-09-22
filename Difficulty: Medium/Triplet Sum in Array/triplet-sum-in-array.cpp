class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int lo,hi,a;
        for(int i=0;i<n-2;i++)
        {
            if(i>0 && arr[i]==arr[i-1]) continue;
            lo=i+1;
            a=arr[i];
            hi=n-1;
            while(lo<hi)
            {
                int s=a+arr[lo]+arr[hi];
                if(s==target)
                {
                    return true;
                }
                else if(s<target)
                lo++;
                else hi--;
            }
            
        }
        return false;
    }
};