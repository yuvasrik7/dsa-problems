class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n=arr.size()+1;
        long long expsum=static_cast<long long>(n)*(n+1)/2;
        long long actsum=0;
        for(int &i:arr)
           actsum+=i;
       return expsum-actsum;

    }
};