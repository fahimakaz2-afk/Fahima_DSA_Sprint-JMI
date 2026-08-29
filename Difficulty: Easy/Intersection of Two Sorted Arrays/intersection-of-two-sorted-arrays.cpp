class Solution {
  public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        // code here
      int n = a.size();
      int m = b.size();
      
      vector<int>ans;
      
      int i = 0;
      int j = 0;
      
      while(i < n && j < m){
          if (i > 0 && a[i] == a[i - 1]) {
              i++;
              continue;
          }
          if (j > 0 && b[j] == b[j - 1]) {
              j++;
              continue;
          }
          if(a[i] < b[j]){
              i++;
          }
          else if(b[j] < a[i]){
              j++;
          }
          else{
              ans.push_back(a[i]);
              i++;
              j++;
          }
         
      }
       return ans;
    }
};