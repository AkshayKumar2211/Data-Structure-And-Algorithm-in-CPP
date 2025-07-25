#include<iostream>
// this recursive program will print numbers in 
void print(int n)
{
    if(n==0) return;
     
    std::cout<<n<<std::endl;
     print(n-1);
     
   
}
int main(){
    int number=10;
    print(number);
}