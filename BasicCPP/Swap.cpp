#include<iostream>

int main(){
    int a;
    int b;
    int temp;
    std::cout<<"Enter the value of a:";
    std::cin>>a;

    std::cout<<"Enter the value of b:";
    std::cin>>b;

    std::cout<<"Value of a before swap :"<<a<<std::endl;
    std::cout<<"Value of b before swap :"<<b<<std::endl;

    temp=a;
    a=b;
    b=temp;

    std::cout<<"Value of a after swap :"<<a<<std::endl;
    std::cout<<"Value of b after swap :"<<b<<std::endl;


    
return 0;

}