#include<iostream>
int main(){
    int n , d , rev=0 ;
    std::cout<<"Enter A Number : ";
    std::cin>>n;
    while(n>0){
        d = n% 10;
        rev = rev*10 +d ;
        n /=10;
    }
    std::cout<<"Reversed Number is : "<<rev;
    return 0;
}