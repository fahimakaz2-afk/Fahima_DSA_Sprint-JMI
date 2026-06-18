class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        // code here
        int n = arr.size();
        int minimum;
        for(int i = 0; i < n-1; i++)
        {
                minimum = i;
            for(int j = i ; j < n; j++ ){
                
                
                if(arr[j] < arr[minimum])
                {
                    minimum = j;
                }
                
            }
            swap(arr[minimum], arr[i]);
            
        }
    }
};