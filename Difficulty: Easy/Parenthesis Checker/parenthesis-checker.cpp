
class Solution {
  public:
    bool isBalanced(string& k) {
        // code here
      stack<char> st;
      unordered_map<char,char> match={
          {')','('},{']','['},{'}','{'}};
          for(char c: k)
          {
              if(c=='(' || c=='[' || c=='{')
              {
                  st.push(c);
              }
              else if(c==')' || c==']'|| c=='}')
              {
                  if(st.empty()|| st.top()!=match[c] )
                    return false;
                  st.pop();     
              }
             
    }
     return st.empty();
          }
      };