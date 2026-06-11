class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        if(is_sorted(arr.begin(),arr.end()))
            return true;
        return false;
    }
};