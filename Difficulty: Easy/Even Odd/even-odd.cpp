class Solution {
  public:
    void evenOdd(int a, int b) {
        // Code here
        int even, odd;
        if(a % 2 == 0 )
        {  
            even = a;
            odd = b;
        }
        else
        {
            even = b;
            odd = a;
        }
        
        cout<<even<<endl;
        cout<<odd<<endl;
    }
};