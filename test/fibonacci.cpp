#include <bits/stdc++.h>
using namespace std ; 

int main() {
 
 
    int n ;
    std::cout << "term : " ; std::cin>>n ; 
    int t1 = 0 ; // fist 
    int t2= 1 ;  // sec 
 
    for (int i = 0  ;i<=n ; i++) {
 
        std::cout << t1 <<" " ; 
        int news = t1+t2 ;
        t1 = t2 ; 
        t2 = news ;  
        // calculate 
        // 0+1 = 1
        // 1+1 = 2
        // 1+2 = 3 
        // 3+5 = 8
        // 5+8 = 13 
        
    } 
    std::cout <<endl ; 
 
    return 0  ; 
}

