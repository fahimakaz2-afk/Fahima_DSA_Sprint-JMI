class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        int st = 0;
        int l = s.size() - 1;
        
        while(st < l){
            if(s[st]!= s[l]) return false;
            
            st++;
            l--;
        }
        return true;
    }
};