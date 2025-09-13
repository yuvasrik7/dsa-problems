// User function Template for C++
class Solution {
  public:
    string reverseString(string& s) {
        // code here
        for(int i=0,j=s.length()-1;i<s.length()/2;i++,j--)
        {
            char c;
            c=s[i];
            s[i]=s[j];
            s[j]=c;
        }
        return s;
    }
};
