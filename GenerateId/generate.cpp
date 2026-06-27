#include <bits/stdc++.h>

using namespace std ; 
  
const int MAX = 10 ; 
string GenerateLetter( int nx ) {
    char Max_size_Letter[MAX] = {'A', 'B' , 'C' , 'D' ,'F' ,'G','I','S' ,'U','V'} ;
    string rs_size  = "" ; 
    for (int i =0 ;i<nx ; i++) {
        rs_size = rs_size + Max_size_Letter[rand() % MAX] ; 
    }
    return rs_size ; 
} 
int generateNumber (int nums) {
 
    nums = rand() % 900000000 + 100000000 ; 
    std::cout << nums <<endl ;  
    return nums ; 
} 

int main() {

    srand(time(NULL)) ; 
    int nx =3  ; 
    std::cout <<"letter : " << GenerateLetter(nx) <<endl ;   
    int n ; 
    n = generateNumber(n) ;


    std::cout <<"Number : " << n <<endl ; 
 
    string sum = GenerateLetter(nx) + to_string(n)  ; 
    std::cout << sum <<endl ; 




    return 0  ; 
    
} 

