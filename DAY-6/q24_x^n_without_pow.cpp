#include <iostream>
int main() {

    int x, n;
    long long power = 1;
    std::cout << "Enter base x : ";
    std::cin >> x ;

    std::cout << "Enter exponent n : ";
    std::cin >> n ;

    //calculate x^n
    for (int i = 1; i <= n; i++) {
        power *= x; //multiply x (n)times
    }
    std::cout << x << " ^ " << n << " = " << power ;
    return 0;
}