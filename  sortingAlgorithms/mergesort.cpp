#include<iostream>
#include<vector>

void mergeSort(std::vector<int>& arr ,int low ,int mid,int high)
{
    
    std::vector<int> temp;
    int left = low;
    int right = mid + 1;

    // Merge the two halves into temp
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left++]);
        } else {
            temp.push_back(arr[right++]);
        }
    }

    // Copy remaining elements from left half
    while (left <= mid) {
        temp.push_back(arr[left++]);
    }

    // Copy remaining elements from right half
    while (right <= high) {
        temp.push_back(arr[right++]);
    }

    // Copy sorted temp back to original array
    for (int i = low; i <= high; ++i) {
        arr[i] = temp[i - low];
    }
}


void merge(std::vector<int>& arr,int low,int high)
{
    if(low<high)
    {
        int mid=low+(high-low)/2;

        merge(arr,low,mid);
        merge(arr,mid+1,high);

        mergeSort(arr,low,mid,high);
    }


}




int main()
{
    std::vector<int> arr={2,5,4,7,1,3,5,4,7,9};

    merge(arr,0,9);

    for(int i=0;i<10;i++)
    {
        std::cout<<arr[i]<<std::endl;
    }
}