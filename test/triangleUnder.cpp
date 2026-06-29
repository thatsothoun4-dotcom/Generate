#include <bits/stdc++.h>
using namespace std ; 
 
void Under() {
 
    int n ;
    std::cout << "n :" ;std::cin>> n; 
 

    // formual under != 0 
    // n >= .. i-- 
    // space  : n - i - 1 ; 
    // stars  : 2*i + 1 ;

  
    for (int i = n - 2 ; i>= 0 ;i-- ) {
 
        for (int j = 0 ;j< n - i - 1 ;  j++){
 
            
            std::cout << " " ; 
        } 
        for (int j = 0 ;j< 2 * i + 1 ; j++) {
 
            std::cout << "*" ; 
         } 
        std::cout << endl ; 
    }
}
int main() {
  

    Under() ; 
    return 0  ;

}
