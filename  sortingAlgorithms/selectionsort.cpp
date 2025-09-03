#include<iostream>
int main()
{
    int arr[10]={2,5,4,7,1,3,5,4,7,9};

    for(int i=0;i<10;i++)
    {
        int min=i;
        for(int j=i+1;j<10;j++)
        {
            if(arr[j]<arr[min])
            min=j;
        }

        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }

    for(int i=0;i<10;i++)
    {
        std::cout<<arr[i]<<std::endl;
    }
}