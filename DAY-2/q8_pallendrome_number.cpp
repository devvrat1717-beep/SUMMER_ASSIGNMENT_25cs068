#include<iostream>
int main(){
    int n , d , temp , rev=0 ;
    std::cout<<"Enter A Number : ";
    std::cin>>n;
    temp = n ; //storing original value
    while(n>0){ 
        d = n% 10;
        rev = rev*10 +d ;
        n /=10;
    }
    if(temp == rev){
        std::cout<<temp<<" is a pallendrome number "<<std::endl;
    }
    else {
        std::cout<<temp<<" is not a pallidrome number "<<std::endl;
    }
    return 0;
}