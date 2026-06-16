class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int n = arr.size();
        int first = -1;
        int last = -1;
        
        // 1. Binary Search for the First Occurrence
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == x) {
                first = mid;      // Record target candidate index
                high = mid - 1;   // Force search to look left for earlier copies
            } else if (arr[mid] < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        // 2. Binary Search for the Last Occurrence
        low = 0; 
        high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == x) {
                last = mid;       // Record target candidate index
                low = mid + 1;    // Force search to look right for later copies
            } else if (arr[mid] < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        return {first, last};
    }
    
};