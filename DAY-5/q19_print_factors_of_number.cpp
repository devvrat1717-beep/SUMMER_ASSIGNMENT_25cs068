#include <iostream>
int main() {

    int n ;
    std::cout<< "Enter a number : ";
    std::cin>> n ;

    std::cout <<"Factors of "<< n << " are : ";

    //check every number from 1 to n
    for (int i = 1 ; i <= n ; i++) {

        if (n % i == 0) { //if remainder is 0, then i is a factor
            std::cout << i << " " ;
        }
    }
    return 0;
}