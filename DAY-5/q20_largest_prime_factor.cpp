#include <iostream>
int main() {

    int n;
    std::cout << "Enter number : " ;
    std::cin >> n ;

    int largestPrime = -1;
 //remove all factors of 2
    while (n % 2 == 0) {
        largestPrime = 2;
        n /= 2 ;
    }

    //check odd factors from 3
    for (int i = 3 ; i * i <= n ; i = i +2) {
        //keep dividing while i is a factor
        while (n % i == 0) {
            largestPrime = i;
            n /= i;
        }
    }
    if (n > 2) {
        largestPrime = n ;
    }

    std::cout << "Largest Prime Factor : " <<largestPrime ;
    return 0;
}