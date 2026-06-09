#include <iostream>
int main() {

    int n , count = 0 ;
    std::cout << "Enter number : ";
    std::cin >> n ;

    //count set bits
    while (n > 0) {
        //if remainder is 1, a set bit is found
        if (n % 2 == 1) {
            count++;
        }
        n /= 2;
    }

    std::cout << "Number of Set Bits is  " << count ;
    return 0;
}