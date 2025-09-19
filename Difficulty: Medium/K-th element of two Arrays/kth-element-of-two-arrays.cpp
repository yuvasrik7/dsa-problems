class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        // code here
        int n=a.size();
        int count=0;
        int m=b.size();
        int i=0,j=0;
        int result=0;
        while(i<n && j<m)
        {
            if(a[i]<b[j])
            {
                result=a[i];
                i++;count++;
            }
            else if(a[i]>b[j])
            {
                result=b[j];
                j++;count++;
            }
            else
            {
                result=a[i];
                i++; count++;
            }
            if(count==k)
            break;
            
        }
        while(i<n && count<k)
        {
            result=a[i];
            i++; count++;
        }
        while(j<m && count<k)
        {
            result=b[j];
            j++;count++;
        }
        return result;
        }
    };
