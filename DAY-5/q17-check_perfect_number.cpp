#include <iostream>
int main() {
    int num , sum = 0;

    std::cout <<"Enter a Number : ";
    std::cin>>num ;

    for (int i = 1 ; i < num ; i++) {
        if (num % i == 0) { //check if i is divisor of input number
            sum = sum + i ;
        }
    }

    //check num is perfect number or not
    if (sum == num)
        std::cout<< num <<" is a Perfect Number";
    else
        std::cout<< num <<" is not a Perfect Number";

    return 0;
}