#include<iostream>
int main(){
    int n,sum=0;
    std::cout<<"Enter Positive Number: ";
    std::cin>>n;
    for(int i=0; i<=n; i++){
        sum = sum+i;
    }
    std::cout<<"Sum of Positive Natural Number : "<<sum<<std::endl;

}