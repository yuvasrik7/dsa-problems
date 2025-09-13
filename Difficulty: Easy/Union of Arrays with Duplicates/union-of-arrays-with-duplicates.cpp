class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
       set<int> s;
       vector<int> result;
       for(int i: a) s.insert(i);
       for(int j:b) s.insert(j);
       for(int c: s) result.push_back(c);
       return result;
    }
};