class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int s=arr.size();long long max=arr[0];long long sec=-1;
        if(s<2) return -1;
        for(int i=1;i<s;i++)
        {
            if(arr[i]>max)
            {   
                max=arr[i];
            }
        }bool found=false;
        for(int i=0;i<s;i++)
        {
            if(arr[i]<max)
            {if(!found||arr[i]>sec)
               {  sec=arr[i];
               found=true;
               }}
        }
        return found?sec:-1;
}
         
};