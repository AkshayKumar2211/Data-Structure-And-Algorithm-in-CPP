#include<iostream>
int mean(int arr[],int n,int mn)
{
    if(n<0) return mn;

    mn+=arr[n];

   return mean(arr,n-1,mn);

}
int main()
{
    int arr[5]={1,2,3,4,5};

    std::cout<<mean(arr,4,0)/5;
}