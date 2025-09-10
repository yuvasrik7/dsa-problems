class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        int n1=s1.length();
        int n2=s2.length();
        int arr1[26]={0};
        int arr2[26]={0};
        for(char c: s1)
        {
            arr1[c-97]+=1;
        }
        for(char k: s2)
        {
            arr2[k-97]+=1;
            
        }
        for(int i=0;i<26;i++)
        {
            if(arr1[i]!=arr2[i])
            return false;
        }
        return true;
        
        
        
        
    }
};