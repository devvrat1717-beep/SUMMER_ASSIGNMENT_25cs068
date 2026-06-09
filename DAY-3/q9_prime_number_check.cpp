#include<iostream>
int main(){
    int num;
    bool Isprime=true;
    std::cout<<"Enter Number : ";
    std::cin>>num;
    if(num<2){ //1 and 0 is not prime
        Isprime=false;
    }
    else {
        for(int i=2 ; i<=num/2 ; i++){ //check factors until num/2
            if(num % i == 0){
                Isprime= false;
                break;
            }
        }
    }
    if(Isprime){
        std::cout<<num<<" is a Prime Number"<<std::endl;
    }
    else {
        std::cout<<num<<" is not a Prime Number"<<std::endl;
    }
    return 0;
}