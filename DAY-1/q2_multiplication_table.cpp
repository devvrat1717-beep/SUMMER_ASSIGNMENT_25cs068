#include<iostream>
int main(){
    int n;
    std::cout<<"Enter a Number : ";
    std::cin>>n;
    std::cout<<"Multiplication table of "<<n<<":\n";
    for(int i =0;i<=10;i++){
        std::cout<<n<<" x "<<i<<" = "<<n*i<<"\n";
    }
    return 0;
}