class Solution {
  public:
  void getsum(vector<int>& arr, vector<int>& ans, int cur_sum, int i){
      
      if(i == arr.size()){
          ans.push_back(cur_sum);
          return;
      }
      
      
      getsum(arr,ans,cur_sum+arr[i],i+1);
      
      getsum(arr,ans,cur_sum,i+1);
  }
  
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int>ans;
        
        getsum(arr,ans,0,0);
        return ans;
    }
};