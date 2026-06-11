class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        int UI = 0;
        for(int i =1;i< arr.size() ; i++ )
        {
            if( arr[i] != arr[UI])
            {
               UI++;
               arr[UI] = arr[i];
            }
        }
        arr.resize(UI+1);
        return arr;
    }
};