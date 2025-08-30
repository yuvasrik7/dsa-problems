class Solution {
  public:
  
           
  long long merge(vector<int>&arr,int left,int mid,int right)
    {
        int n1=mid-left +1;
        int n2=right-mid;
        long long invcount=0;
        vector<int>leftarr(n1),rightarr(n2);
        for(int i=0;i<n1;i++)
        {
            leftarr[i]=arr[left+i];
        }
        for(int i=0;i<n2;i++)
        {
            rightarr[i]=arr[mid+i+1];
        }
        int i=0,j=0,k=left;
        while(i<n1 && j<n2)
        {
            if(leftarr[i]<=rightarr[j])
            {
                arr[k++]=leftarr[i++];
            }
            else {
                arr[k++]=rightarr[j++];
                invcount+=(n1-i);}
        }
        while(i<n1)arr[k++]=leftarr[i++];
         while(j<n2)arr[k++]=rightarr[j++];
        return invcount;
    }
           
   long long mergesort(vector<int>&arr,int left,int right)
    {
        long long invcount=0;
        
        if(left<right)
        {  int mid=(left+right)/2;
        invcount+= mergesort( arr,left,mid);
         invcount+=mergesort(arr,mid+1,right);
         invcount+=merge(arr,left,mid,right);
    }
        return invcount;
    }
      int inversionCount(vector<int> &arr) {
      return  mergesort(arr,0,arr.size()-1);}
};