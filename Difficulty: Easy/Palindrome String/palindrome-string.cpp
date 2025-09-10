class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        int size=s.length();
        for(int i=0,j=size-1;i<size/2;i++,j--)
        {
            if(s[i]!=s[j])
            return false;
        }
        return true;
    }
};