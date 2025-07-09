#include<iostream>
int main(){

    int n,m;
    
    std::cout<<"Enter the value of number :";
    std::cin>>n;
    std::cout<<std::endl;
    std::cout<<"Enter the value of number :";
    std::cin>>m;

    int r=n/m;

     if (abs(n - r * m) < abs(n - (r + 1) * m))
        std::cout << r * m;
    else
        std::cout << (r + 1) * m;



}