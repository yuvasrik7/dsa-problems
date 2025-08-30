class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
        unordered_map<int,int>mapa,mapb;
        int n=a.size();
        int m=b.size();
        for(int i:a)
        {
            mapa[i]++;
        }
       
        for(int i:b)
        {
            mapb[i]++;
        }
        for(auto& p:mapb)
        {
            if(mapa[p.first]<p.second)
            {
                return false;
            }
        }
        return true;
    }
};