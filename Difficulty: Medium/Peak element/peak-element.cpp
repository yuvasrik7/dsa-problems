class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // code here
    
        int n = arr.size();
        int low = 0, high = n - 1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            bool leftOK = (mid == 0) || (arr[mid] >= arr[mid - 1]);
            bool rightOK = (mid == n - 1) || (arr[mid] >= arr[mid + 1]);
            
            if (leftOK && rightOK) {
                return mid; // Found a peak
            }
            else if (mid > 0 && arr[mid - 1] > arr[mid]) {
                high = mid - 1; // Peak lies in left half
            }
            else {
                low = mid + 1; // Peak lies in right half
            }
        }
        
        return -1; // Should never happen
    }
};
