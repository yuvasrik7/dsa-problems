class Solution {
  public:
    bool findTriplets(vector<int> &arr) {
        // code here
        int n=arr.size();
       sort(arr.begin(),arr.end());
       for(int i=0;i<n-2;i++)
       {
          if(i>0 && arr[i]==arr[i-1]) continue;
          int a=arr[i];
          int lo=i+1;
          int hi=arr.size()-1;
          while(lo<hi)
          {
              int s=a+arr[lo]+arr[hi];
              if(s==0)
              {
                  return true;
              }
              else if(s<0)
              {
                  lo++;
              }
              else
              hi--;
          }
          
       }
       return false;
        
    }
};