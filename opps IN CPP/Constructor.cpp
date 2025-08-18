#include<iostream>
#include<string>

class person{

    public:
    int Id;
    std::string name;
    std::string region;
    int DOB;

    person(int I,std::string name,std::string re,int d)  // constructor is defined a special program which run automatically when a object is created it does not have return type
    {
        Id=I;
        this->name=name;  // we use this used to handle matching name
        region=re;
        DOB=d;

        std::cout<<"This is a parameterised constructor";

    }
    
};
int main(){
    person p(1,"Akshay","Asian",2211);

    std::cout<<p.Id<<std::endl;
    std::cout<<p.name<<std::endl;
    std::cout<<p.region<<std::endl;
    std::cout<<p.DOB<<std::endl;



}


// start from 44:37