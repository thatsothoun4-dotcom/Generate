#include <bits/stdc++.h>
using namespace std ; 
 
void daimond() {
 
    // space  = n - i - 1 ; 
    // star = 2*i+1 ; 
    //  space daimond = n-i-1  ; 
    //  star = 2 * i + 1 ;  ;  
    //
 
    int n ;
    std::cout << "n : "; std::cin>>n ; 
    
    for (int i = 0 ;i  < n   ; i++) {
   
        std::cout << endl ; 

        for (int j =0 ;j<n-i-1 ;j++) {
 
            std::cout <<" "  ; 
        }
        for (int j =0 ;j<2*i+1 ; j++) {
 
 
            std::cout << "*" ; 
        }
    } 
    std::cout <<endl ;  
    //  for make daimond 
    for (int i = n - 2; i >= 0; i--) { // n 

        for (int j = 0; j < n - i - 1; j++) // space 
            cout << " ";

        for (int j = 0; j < 2 * i + 1; j++) // star 
            cout << "*";

        cout << endl;
    }
}
int main() {

  
    daimond() ; 
    return 0 ; 
}


