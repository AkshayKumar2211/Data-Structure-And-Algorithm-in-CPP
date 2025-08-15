#include<iostream>
#include<string>
class student{
 
    private:
    int age;  // we can access this by getter and setter methods

    public: // This is access modifier their are three access modofier in cpp public ,private ,protected.

    // Data members
    std::string name;
    int roll_NO;
    int check; 

    //setter
    void set(int s)
    {

        age=s;

    }

    //getter
    int get(){
        return age;
    }

    //Functions
    void Marks(int m1,int m2){
        std::cout<<m1*m2<<std::endl;
    }

};

int main(){
  student S1;    // S1 is the object

  S1.name ="Akshay Kumar";
  S1.roll_NO=101;
  S1.Marks(15,20);

  S1.set(55);
  
  std::cout<<"The age of student is::"<<S1.get();

  std::cout<<sizeof(S1);

//  std::cout<<S1.check<<std::endl;

}