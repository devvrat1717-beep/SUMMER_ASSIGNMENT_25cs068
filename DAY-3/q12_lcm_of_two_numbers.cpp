#include<iostream>
//LCM = (a * b)/gcd

//fuction to find gcd for calculating lcm
int findGCD(int x , int y) {
    if(y==0) {
        return x ;
    }
    return findGCD(y , x % y);
}

//fuction to calculate lcm 
int findLcm(int x , int y){
    if( x == 0 || y == 0){
        return 0 ;
    }
    return ((x * y )/findGCD(x , y));
}

int main (){
    int a , b ;
    std::cout<<"Enter Two Numbers : ";
    std::cin>>a>>b;

    int result = findLcm( a , b);
    std::cout<<"LCM Of "<< a <<" & "<< b <<" is : "<< result;
    return 0;
    
}