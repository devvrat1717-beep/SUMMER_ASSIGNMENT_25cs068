#include<iostream>
#include<cmath> 

int main (){

    int start , end ;
    std::cout<<"Enter starting Number : ";
    std::cin>> start ;

    std::cout<<"Enter Ending Number : ";
    std::cin>> end ;

    std::cout<<"Armstrong number between "<<start <<" & "<<end <<std::endl;

    for(int i = start ; i <= end ; i++ ){
        
        int  sum = 0 , d ;
        int digitnum = 0;
        int original = i;
        int temp = i ;

        //count digits
        while(temp > 0) {
            digitnum ++ ;
            temp /= 10 ;
        }
        temp = i;

    //calculate power of digits
        while(temp > 0) {
            d = temp % 10 ;
            sum += std::round(std::pow(d , digitnum));
            temp /= 10 ;
        }

        if( sum ==  original){
            std::cout<<original<<std::endl;
        }
    }
    return 0;
    
}