// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int rem = 0;
        int sum = 0;
        int temp = n;
        while(temp > 0)
        {
           
            rem = temp%10;
            rem = rem*rem*rem;
            sum+=rem;
            temp = temp/10;
        }
        if(sum == n)
        {
            return true;
        }
        return false;
    }
};