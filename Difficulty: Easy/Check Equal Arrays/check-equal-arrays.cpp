class Solution {
  public:
    bool checkEqual(vector<int>& a, vector<int>& b) {
        // code here
        int n=a.size();
        int m=b.size();
        int sum1=0,sum2=0;
       if(n==m)
       {
           for(int i=0;i<n;i++)
           {
               sum1+=a[i];
           }
           for(int j=0;j<m;j++)
           {
               sum2+=b[j];
           }
           if(sum1==sum2) return true;
       }
       
       return false;
    }
};