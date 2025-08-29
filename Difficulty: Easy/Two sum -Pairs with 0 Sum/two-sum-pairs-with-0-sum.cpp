// User function template for C++

class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        // code here
        vector<vector<int>>result;
        sort(arr.begin(),arr.end());
        int left=0,right=arr.size()-1;
        int sum;
         while(left<right)
         {  sum=arr[left]+arr[right];
             if(sum==0)
               {    int lval=arr[left],rval=arr[right];
                   result.push_back({arr[left],arr[right]});
                   while(left<right && lval==arr[left] ) left++;
                   while(left<right && rval==arr[right] )right--;
               }
               else if(sum<0)
               {
                   left++;
               }
               else right--;
         }
         return result;}
}; 