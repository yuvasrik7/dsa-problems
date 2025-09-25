
class Solution {
  public:
    char nonRepeatingChar(string &s) {
        //  code here
        int arr[26]={0};
      
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]>='a' && s[i]<='z')
            // {    if(count==0)
            // {
            //     arr[i-'a']=100;
            //     count++;
            // }
           {
                arr[s[i]-'a']+=1;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(arr[s[i]-'a']==1)
            return s[i];
        }
        
        return '$';
    }
};