#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
/*ocode to Guide You:
For the upper part (i from 1 to n):
Print i asterisks.
Print 2 * (n - i) spaces.
Print i asterisks again.
For the lower part (i from n-1 to 1):
Print i asterisks.
Print 2 * (n - i) spaces.
Print i asterisks again.*/
    // code here
 for (int i = 1; i <= n; i++) {
       
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        
        
        for (int space = 1; space < 2*(n - i); space++) {
          
            cout << " ";
        }
        
       
        for (int j = 1; j <= i; j++) {
            
             if( j== n)
             {
                 break;
             }
             else
                 cout << "*";
            
        }
        cout << endl;
    }

    
    for (int i = n - 1; i >= 1; i--) {
        
        for (int j = 1; j <= i; j++) {
                cout << "*";
            }
           
        
        
        for (int space = 1; space <  2*(n - i) ; space++) {
            // cout << "Spaces: " << 2 * (n - i) << endl; 
            cout << " ";
        }
        
      
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}