#include<iostream>

int sumofnum(int n)
{
    if(n==0) return n ;

    int res=n + sumofnum(n-1);

    return res;
}
int main(){
    int num=10;

    std::cout<<sumofnum(num);
}