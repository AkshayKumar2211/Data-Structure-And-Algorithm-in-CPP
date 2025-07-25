#include<iostream>
int sumofnum(int n)
{
    if(n==1) return 1;

    int result=n + sumofnum(n-1);

    return result;
}
int main(){
    int num=10;
   std::cout<< sumofnum(num);
}