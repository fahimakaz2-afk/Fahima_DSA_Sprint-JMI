class Solution {
  public:
    vector<int> singleNum(vector<int>& arr) {
        // Code here.
      vector<int>ans;
      unordered_map<int, int>frequency;
      
      for(int val: arr)
      {
          frequency[val]++;
      }
      for(auto const& [num, count]: frequency)
      {
          if (count == 1){
              ans.push_back(num);
          }
      }
      sort(ans.begin(),ans.end());
      return ans;
    }
};