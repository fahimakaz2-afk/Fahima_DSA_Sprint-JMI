class Solution {
  public:
    string decToBinary(int n) {
        // code here
        if(n == 0)
        {
            return "0";
        }
        else if(n == 1)
        {
            return "1";
        }
        else{
            string bin = "";
            char rem  = (n % 2) + '0';
            bin += rem;
            return decToBinary(n/2) + bin;
        }
    }
};