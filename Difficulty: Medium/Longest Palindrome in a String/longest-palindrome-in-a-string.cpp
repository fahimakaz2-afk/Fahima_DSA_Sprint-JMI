class Solution {
  public:
  bool ispal(string& s, int l, int r){
      if(l >= r) return true;
      if(s[l]!= s[r]) return false;
      return ispal(s,l+1,r-1);
      
  }
    string longestPalindrome(string &s) {
        // code here
        int n = s.size();
        if(n == 0) return "";
        
        int bestStart = 0, bestLen = 1;
        

        
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                int len = j - i + 1;
                if(len > bestLen && ispal(s,i,j)){
                    bestLen = len;
                    bestStart = i;
                }
            }
        }
        return s.substr(bestStart, bestLen);
    }
};