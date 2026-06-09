#include<iostream>
int main(){
    int n , d ,sum = 0 ;
    std::cout<<"Enter Number : ";
    std::cin>>n;
    while(n>0){
        d = n % 10; //last digit of number
        sum += d;  //add last digit to sum
        n /= 10;   //remove last digit
    }
    std::cout<<"Sum of Digits are : "<<sum;
    return 0;
}