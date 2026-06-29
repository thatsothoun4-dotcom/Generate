#include <bits/stdc++.h>
using namespace std ; 
 
void pyramid() {
 
    // if for space  : use n - i - 1 ; 
    // if star (*) : use 2*i+1 ; 
    int row ; 
    std::cout << "row : " ;std::cin>>row ; 
 
    for(int i = 0 ;i< row ; i++) {
   
        for (int j =0  ;j< row-i-1 ; j++) {
 
            std::cout << " " ; 
        }
        for (int j = 0 ;j<2*i + 1 ; j++) {


 
            std::cout << "*" ; 
        }
     
    std::cout << endl ; 
    }
}

int main() {
 
    pyramid()  ; 
    return 0 ;
}

