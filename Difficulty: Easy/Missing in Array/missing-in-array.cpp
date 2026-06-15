class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int sum = 0;
        int EXsum = 0;
        int n = arr.size();
        int mn;
        for(int val : arr)
        {
            sum+=val;
        }
        for(int i = 1; i <=n+1; i++)
        {
            EXsum+=i;
        }

        mn = EXsum - sum;
        return mn;
    }
};