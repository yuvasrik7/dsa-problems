int majorityElement(int arr[], int n) {
    // code here
    int count=0;
    int candidate;
    for(int i=0;i<n;i++)
    {
        if(count==0)
        {
            candidate=arr[i];
            count++;
        }
        else if(arr[i]==candidate)
        {
            count++;
        }
        else
           count--;
           
    }
    int freq=0;
     for(int i=0;i<n;i++)
     {
         if(arr[i]==candidate)
         {
             freq++;
         }
     }
     if(freq>n/2) return candidate;
     else return -1;}