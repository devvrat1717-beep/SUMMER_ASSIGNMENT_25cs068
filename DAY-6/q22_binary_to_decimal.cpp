#include <iostream>
int main() {
    int bnum , dnum = 0;
    int base = 1;
    std::cout << "Enter a binary number : ";
    std::cin >> bnum ;

    while (bnum > 0) {
        int d = bnum % 10;
//convert binary digit to decimal value
        dnum += d * base;
        base *= 2;
        bnum /= 10;
    }

    std::cout<< "Decimal number is :  " << dnum;
    return 0;
}