#include<iostream>
#include<cmath> 

int main (){
    int n , temp , d , sum = 0;
    int digitnum = 0;

    std::cout<<"Enter a Number : ";
    std::cin>> n ;

    // count number of digits
    int original= n;
    temp = n ;
    while(temp > 0) {
        digitnum ++ ;
        temp /= 10 ;
    }
    temp = original;

    //calculate cubes of digits
    while(temp > 0) {
        d = temp % 10 ;
        sum += std::round(std::pow(d , digitnum));
        temp /= 10 ;
    }

    if( sum ==  original){
        std::cout<<  original << " is a Armstrong number "<<std::endl;
    }
    else {
        std::cout<<  original << " is not a Armstrong number "<<std::endl;
    }

    return 0 ;
}