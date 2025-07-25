#include<iostream>
#include<vector>

int binarySeacrh(std::vector<int>& num,int low,int high,int sear)
{
    int mid=low+(high-low)/2;

    if(num[mid]==sear)
    return mid;

    if(low>high) return 0;

    if(num[mid]<sear)
    return binarySeacrh(num,mid+1,high,sear);
    else
    return binarySeacrh(num,low,mid-1,sear);


}
int main()
{
 std::vector<int> arr;

 for(int i=0;i<10;i++)
 {
    arr.push_back(i);
 }

    std::cout<<binarySeacrh(arr,0,9,15);
}