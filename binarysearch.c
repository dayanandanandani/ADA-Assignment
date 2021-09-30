#include<stdio.h>

int binarySearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high=size-1;
    while(low<=high)
    {
    mid = (low+high)/2;
    //Start searching
        if(arr[mid]==element)
        {
            return mid; 
        }
        if(arr[mid]<element)
        {
            low = mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    //Searching ends
    return -1;
}

int main()
{
    //Array should be sorted for binary search
    int arr[] = {1,3,4,5,7,8,9,10};
    int size = sizeof(arr)/sizeof(int);
    int element = 4;
    int searchIndex = binarySearch(arr, size, element);
    printf("The element %d was found at %d\n", element, searchIndex);
    return 0;
}
