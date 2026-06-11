class Solution {
  public:
    vector<int> singleNum(vector<int>& arr) {
        // Code here.
       int sum = 0;
        // vector<int>ans;
        for (int val: arr)
        {
            sum^=val;
        }
         unsigned int rightmostSetBit = sum & ~(static_cast<unsigned int>(sum) - 1);
        
        int x = 0;
        int y = 0;
        
       
        for (int val : arr) {
            if (val & rightmostSetBit) {
                x ^= val;
            } else {
                y ^= val;
            }
        }
         
        
        if (x < y) {
            return {x, y};
        } else {
            return {y, x};
        }
    }
};