#include<iostream>
int main()
{
    //count all the digit of number

    int n=123456789;
    int count=0;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    std::cout<<"The count of digits is :::";
    std::cout<<count;


    int m=123456789;

    //reverse a number
    int num=0;
    while(m>0)
    {
        int last=m%10;
        m=m/10;
        num=(num*10)+last;
    }

    std::cout<<"The reverse of the number is :::";

    std::cout<<num;


    std::string pali="122";

    int i=0;
    int j=pali.size();

    while(i<j)
    {
        if(pali[i]!=pali[j])
        {
            std::cout<<"The given string is not an palidrom";
            break;
        }
    }
}