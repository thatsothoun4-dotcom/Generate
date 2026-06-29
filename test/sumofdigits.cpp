#include <bits/stdc++.h>
using namespace std ; 

int main() {

    int o_OfNum  , num , digits , n = 0 , sum  =0 ; 
    std::cout << "integer : " ; 
    std::cin>>o_OfNum ; 
    //  find digits  n ; 
    num = o_OfNum ; 
    while (num > 0 ) {
 
        num /=10 ; 
        n++ ; 
    }
    //  pow(n) ;
    //
    num  = o_OfNum ; 
    while (num > 0 ) {
 
        digits = num %10 ; 
        sum += pow(digits , n) ; 
        num /= 10  ;
    } 
    // check 

    if (sum == o_OfNum) {
 

        std::cout << sum << "true" <<endl ;
    } 
    
    else { 
        std::cout << sum << "false" <<endl ;
    }
    
 
    return 0; 
}

