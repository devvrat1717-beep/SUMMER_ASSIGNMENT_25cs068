#include<iostream>
int main(){
    int a , b ;
    int gcd = 1;

    std::cout<<"Enter First Number : ";
    std::cin>>a;

    std::cout<<"Enter Second Number : ";
    std::cin>>b;
      
    for(int i = 1 ; i <= a && i<= b ; i++){
        if(a % i == 0 && b % i == 0){
            gcd = i ;

        }
    }
    std::cout << "Greatest Common Divisor between "<<a<<" and "<<b<<" is : "<<gcd<<std::endl;
    return 0 ;
    

}