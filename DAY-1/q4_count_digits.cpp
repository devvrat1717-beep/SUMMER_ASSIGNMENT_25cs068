#include<iostream>
int main(){
    long long n;
    int digit=0 ;
    std::cout<<"Enter a Number : ";
    std::cin>>n;
    if(n==0){
        digit = 1;
    }
    else {
        while(n!=0){
            n = n/10;
            digit++;
        }
        std::cout<<"Number Of Digits = "<<digit;
    }
    return 0;
}