#include<iostream>
int main (){
    int n ;
    int t1 = 0 , t2 = 1 ;
    std::cout<<"Enter Number of terms : ";
    std::cin>> n ;

    if( n == 0 ) {
        std::cout<< "Nth fibonacci term = 0 "<<std::endl;
    }
//calculate nth fibo term
    for(int i = 2 ; i <= n ; i++){
        int nextTerm = t1 + t2 ;
        t1 = t2 ;
        t2 = nextTerm ;
    }

    std::cout << "Nth fibonacci term = " << t2 << std::endl;
    return 0 ;
}