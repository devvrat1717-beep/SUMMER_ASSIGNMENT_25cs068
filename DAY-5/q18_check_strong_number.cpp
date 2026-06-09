#include <iostream>
int main() {
    int num, temp, d, sum = 0 ;

    std::cout<<"Enter a number: " ;
    std::cin>>num ;

    temp = num ; //Store original number

    //Extract digits one by one
    while (temp > 0) {
        d = temp % 10 ;

        //Calculate factorial of digits
        int fact = 1;
        for (int i = 1; i <= d ; i++) {
            fact *= i;
        }
        sum += fact ;  
        temp /= 10 ;   // Remove last digit
    }
    //check condition for strong number
    if (sum == num) {
        std::cout << num << " is Strong Number" ;
    } else {
        std::cout<<num <<" is not Strong Number" ;
    }

    return 0;
}