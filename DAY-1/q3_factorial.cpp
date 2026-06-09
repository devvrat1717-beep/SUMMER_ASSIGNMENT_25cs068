#include<iostream>
int main(){
    int n,fact=1;
    std::cout<<"Enter a number : ";
    std::cin>>n;
    if (n<0){
        std::cout<<"Factorial Doesn't Exist";
    }
    else {
        for(int i=1 ; i<=n ; i++){
            fact=fact*i;

        }
        std::cout<<"Factorial of "<<n<<" is : "<<fact;
    }
    return 0;
}