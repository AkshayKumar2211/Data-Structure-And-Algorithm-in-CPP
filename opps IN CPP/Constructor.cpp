#include<iostream>
#include<string>

class person{

    public:
    int Id;
    std::string name;
    std::string region;
    int DOB;

    person(){
        std::cout<<"Default"<<std::endl;
    }

    person(int I,std::string name,std::string re,int d)  // constructor is defined a special program which run automatically when a object is created it does not have return type
    {
        Id=I;
        this->name=name;  // we use this used to handle matching name
        region=re;
        DOB=d;

        std::cout<<"This is a parameterised constructor";

    }
 // copy constructor
    person(person& temp)
    {
        this->Id=temp.Id;
        this->name=temp.name;
        this->DOB=temp.DOB;
        this->region=temp.region;
    }
    
};
int main(){
    person p(1,"Akshay","Asian",2211);

    std::cout<<p.Id<<std::endl;
    std::cout<<p.name<<std::endl;
    std::cout<<p.region<<std::endl;
    std::cout<<p.DOB<<std::endl;

    // to test copy constructor

    person p1;
    p1.Id=15;
    p1.name="Anaya";
    p1.DOB=2002;
    p1.region="Shimla";

    person p2(p1);


    std::cout<<p2.name;



}


//read of shallow and deep copy of the copy constructor done.
