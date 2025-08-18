#include<iostream>
#include<string>
class Car {
    public:
        std::string name;
        std::string model;
        int Id;

        void price(int num,int vtax){
            std::cout<<"the Price of car is::"<<num*vtax<<std::endl;
        }

};
int main(){
  // static allocatio;

  Car c1;

  // dynamic allocation;

  Car * c2=new Car;

  c2->Id=1;
  (*c2).name="Audi";
  c2->price(15000,2000);
  
}