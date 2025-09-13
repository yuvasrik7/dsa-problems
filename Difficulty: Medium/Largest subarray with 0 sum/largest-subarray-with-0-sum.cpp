
class Solution {
  public:
    int maxLength(vector<int>& arr) {
        unordered_map<int, int> map; 
        int sum = 0;
        int maxLen = 0;

        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];

            if (sum == 0) {
                maxLen = max(maxLen, i + 1); 
            }

            if (map.find(sum) != map.end()) {
               
                maxLen = max(maxLen, i - map[sum]);
            } else {
                
                map[sum] = i;
            }
        }
        return maxLen;
    }
};
