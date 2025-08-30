class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        vector<int>vect(arr.size()+1,0);
      
        int rep,mis;
        for(int i=0;i<arr.size();i++)
        {
            vect[arr[i]]++;
            if(vect[arr[i]]>1)
                rep=arr[i];
        }
        for(int i=1;i<=arr.size();i++)
        {
            if(vect[i]==0) 
                { mis=i; break;}
        }
       
   
         return {rep,mis};
        
    }
};