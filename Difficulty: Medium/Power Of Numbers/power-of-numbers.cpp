class Solution {
  public:
    int reverseExponentiation(int n) {
        // code here
        int rev_digit = 0;
        int rem;
        int temp = n;
        int ans = 1;
        while( temp > 0)
        {
            rem = temp % 10;
            rev_digit = (rev_digit * 10) + rem;
            temp /= 10;
        }
        int x = n;
        x = pow( n , rev_digit);
        return x;
    }
};