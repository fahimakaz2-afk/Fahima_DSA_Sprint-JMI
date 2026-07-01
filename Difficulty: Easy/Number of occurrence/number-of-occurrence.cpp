class Solution {
  public:
    int cf(vector<int>& arr, int target, int l, int r){
        int mid = (l+r)/2;
        if(l > r) return 0;
        
        int count = (arr[mid] == target)?1:0;
        count += cf(arr, target,l,mid-1); 
        count += cf(arr, target,mid+1,r); 
        
        return count;
        
        
    }
    int countFreq(vector<int>& arr, int target) {
        // code here
        return cf(arr,target,0,arr.size()-1);
    }
};
