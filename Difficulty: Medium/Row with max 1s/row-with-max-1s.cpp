// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int maxele=0;
        int n=arr.size();
        int indexr;
        int m=arr[0].size();
        for(int i=0;i<n;i++)
        {  int count=0;
            for(int j=0;j<m;j++)
            {
                if(arr[i][j]==1)
                {
                    count++;
                }
            }if(count>maxele)
            {
                 indexr=i;
                maxele=count;
            }
            
                        
        }
        return indexr;
    }
};