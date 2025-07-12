#include<iostream>
// this recursive program will print numbers in 
void print(int n)
{
    if(n==11) return;
    
    print(n+1);
    std::cout<<n+1<<std::endl;
}
int main(){
    int number=0;
    print(number);
}