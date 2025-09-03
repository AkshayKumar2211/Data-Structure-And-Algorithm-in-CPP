#include<iostream>
int main()
{
    int arr[10]={2,5,4,7,1,3,5,4,7,9};

    for(int i=0;i<10-1;i++)
    {
        
        for(int j=0;j<10-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=temp;
            }
        }

        
    }

    for(int i=0;i<10;i++)
    {
        std::cout<<arr[i]<<std::endl;
    }
}