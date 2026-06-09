#include<iostream>
 int main(){
     int n , d , product=1 ;
     std::cout<<"Enter A Number : ";
     std::cin>>n;
     while(n>0){
         d = n% 10; //last digit of number
         product *= d ; //multiply the digit to product
         n /=10 ; //remove last digit 
     }
     std::cout<<"Product Of Digit Of Number is : "<<product;
     return 0;
 }