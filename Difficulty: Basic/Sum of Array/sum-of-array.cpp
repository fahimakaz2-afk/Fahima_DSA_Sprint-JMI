class Solution {
  public:
    int calcsum(vector<int>& arr, int n){
        if( n<= 0){
            return 0;
        }
        return arr[n-1] + calcsum(arr , n-1);
    }
    int arraySum(vector<int>& arr) {
        // code here
        return calcsum(arr, arr.size());
    }
};