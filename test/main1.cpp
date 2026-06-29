#include <bits/stdc++.h>
 
void ractaingle() {

    int w , h ;
    std::cout << "width : " ; std::cin>>w ; 
    std::cout << "height : " ; std::cin>>h ; 
    for (int i =0 ;i<h; i++) {
 
        for (int j =0 ;j<w ;  j++) {
  
            //  formual i == 0 or i== h-1 or j == 0 or j == w -1 
            if (i == 0 || i == h-1 || j == 0 || j == w -1) {
 
                std::cout << "*" ; 
            } else {
 
                std::cout << " " ; 
            }

        } 
        std::cout << std::endl ; 
    }

}

int main() {
 

 
    ractaingle() ;
    return 0 ; 
}
