class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int max = 0;
        int sec_max = 0;
        for(int val : arr)
        {
            if(val > max)
            {
                max = val;
            }
        }
        for(int val: arr)
        {
            if( val > sec_max && val < max )
            {
                sec_max = val;
            }
        }
        if(sec_max != 0)
                return sec_max;
            
        return -1;
    }
};