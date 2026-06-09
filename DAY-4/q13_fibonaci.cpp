#include<iostream>
int main (){
    int n ;
    int t1 = 0 , t2 = 1 ;
    std::cout<<"Enter Number of terms : ";
    std::cin>> n ;

    std::cout<<"Fibonacci Series is : "<<std::endl;
    for(int i = 0 ; i <= n ; i++){
        std::cout<< t1 <<" ";
        int nextTerm = t1 + t2 ;
        t1 = t2 ;
        t2 = nextTerm ;
    }
    return 0 ;
}