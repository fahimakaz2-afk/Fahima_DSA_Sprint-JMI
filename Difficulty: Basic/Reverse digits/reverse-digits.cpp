class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        int rev_digit = 0;
        int p =1;
        int rem;
        
        while(n > 0)
        {
            rem = n%10;
            
            rev_digit = (rev_digit*10) + rem;
            
            n = n/10;
        }
       
       while(rev_digit % 10 == 0)
       {
           rev_digit = rev_digit%100;
           rev_digit/10;
       }
        return rev_digit;
    }
};