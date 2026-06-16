class Solution {
  public:
    int firstSearch(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        int left = 0;
        int right = n-1;
      
        while(left <= right)
        {
            int mid = left + (right - left)/2;
            if(arr[mid] == k)
            {
               for(int i = 0; i< mid; i++)
               {
                   if(arr[mid] == arr[i])
                    return i;
               }
               return mid;
            }
            else if( arr[mid] < k)
            {
                left = mid+1;
            }
            else
            {
                right = mid-1;
            }
        }
        return -1;
    }
};